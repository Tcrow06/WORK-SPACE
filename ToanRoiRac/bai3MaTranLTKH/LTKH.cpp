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
    ktraCoLap();
    ktraVong();
    ktraTreo();

}
void ktraTreo()
{
    demT=0;
    int dem=0;
    for(int i=1;i<=d;i++)
    {
        dem=0;
        for(int j=1;j<c;j++)
            dem+=a[i][j];
        if(dem==1)
        {
            demT=1;
            break;
        }
    }

    if(demT)
        cout<<"Co dinh treo\n";
    else
        cout<<"Khong co treo\n";

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
            break;
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
    int dem=0;
    for(int j=1;j<=d;j++)
    {
        for(int i=1;i<=d;i++)
            dem+=a[i][j];
        if(dem==1)
        {
            break;
        }
    }
    if(dem)
        cout<<"Co vong\n";
    else
        cout<<"Khong coo vong\n";
}
void ktraSongSong()
{
    demS=0;
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=c;j++)
        {
            for(int i1=i+1;i1<=d;i1++)
                if(a[i][j]&&a[i1][j])
                    for(int j1=j+1;j1<=c;j1++)
                        if(a[i][j1]&&a[i1][j1])
                        {
                            demS=1;
                            break;
                        }
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
   in>>d>>c;
   for(int i=1;i<=d;i++)
   {
       for(int j=1;j<=d;j++)
            in>>a[i][j];
   }

}
