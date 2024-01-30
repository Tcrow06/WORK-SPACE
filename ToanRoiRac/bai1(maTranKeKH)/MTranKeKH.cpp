#include<bits/stdc++.h>
using namespace std;
int d,c,demV,demS,demC,demT;
int a[100][100];
void nhapf();
void ktraSongSong();
void check();
void ktraVong();
void ktraCoLap();
void ktraTreo();
int main()
{
    nhapf();
    check();
}
void check()
{
    ktraSongSong();
    ktraVong();
    ktraCoLap();
    ktraTreo();
}
void ktraTreo()
{
    demT=1;
    int dem;
    for(int i=1;i<=d;i++)
    {
        dem=0;
        for(int j=1;j<c;j++)
            dem+=a[i][j];
        if(dem==1)
        {
            demT=1;
        }
    }

    if(demT)
        cout<<"Co dinh treo\n";
    else
        cout<<"Khong co dinh treo\n";

}
void ktraCoLap()
{
    demC=0;
    int dem=0;
    for(int i=1;i<=d;i++)
    {
        dem=0;
        for(int j=1;j<c;j++)
            dem+=a[i][j];
        if(dem==0)
        {
            demC=1;
        }
    }

    if(demC)
        cout<<"Co dinh co lap\n";
    else
        cout<<"Khong co dinh co lap\n";

}
void ktraVong()
{
    demV=0;
    for(int i=1;i<=d;i++)
    {
        if(a[i][i]!=0)
        {
            demV=1;
            break;
        }
    }
    if(demV==0)
        cout<<"Khong co vong\n";
    else
        cout<<"Co vong\n";
}
void ktraSongSong()
{
    demS=0;
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
            if(a[i][j]>1&&a[j][i]>1)
            {
                demS=1;
                break;
            }
    }
    if(demS==0)
        cout<<"Khong co canh song song\n";
    else
        cout<<"Co canh song song\n";
}

void nhapf()
{
   ifstream in("in.txt");
   in>>d;
   for(int i=1;i<=d;i++)
   {
       for(int j=1;j<=d;j++)
            in>>a[i][j];
   }

}
