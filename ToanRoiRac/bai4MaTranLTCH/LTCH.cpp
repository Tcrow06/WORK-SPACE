#include<bits/stdc++.h>
using namespace std;
int d,c,demV,demS,demC,demT;
vector<pair<int,int>>sc;
int a[100][100];
int check1[100][100];
void nhapf();
void ktraSongSongC();
void check();
void ktraVong();

int main()
{

    nhapf();
    check();
}

void check()
{
    ktraSongSongC();
    ktraVong();

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
void ktraSongSongC()
{
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            check1[i][j]=1;
    demS=0;
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=c;j++)
        {
            for(int i1=i+1;i1<=d;i1++)
                if(a[i][j]*a[i1][j]==-1&&check1[i][j]==1)
                {
                    for(int j1=j+1;j1<=c;j1++)
                        if(a[i][j1]*a[i1][j1]==-1)
                        {
                            demS=1;
                            check1[i][i1]=check1[i1][i]=0;
                            sc.push_back({i,i1});
                            cout<<j1<<endl;
                            cout<<a[i][j1]<<a[i1][j1]<<endl;
                        }
                }
        }

    }
    if(demS)
    {
        cout<<"Co canh song song cung huong\n";
        for(auto x:sc)
            cout<<x.first<<" "<<x.second<<endl;
    }
    else
        cout<<"Khong co canh song song cung huong\n";

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
