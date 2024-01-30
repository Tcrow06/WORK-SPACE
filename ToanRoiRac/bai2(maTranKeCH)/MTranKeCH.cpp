#include<bits/stdc++.h>
using namespace std;
int d,c,demV,demS,demC;
int a[100][100];
int check1[100][100];
vector<pair<int,int>>sc;
vector<pair<int,int>>sn;
int vong[100];
void nhapf();
void ktraSongSongC();
void ktraSongSongN();
void check();
void ktraVong();
int main()
{
    nhapf();
    check();
}


void check()
{
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            check1[i][j]=1;
    ktraSongSongC();
    ktraSongSongN();
    ktraVong();
}

void ktraVong()
{
    demV=0;
    for(int i=1;i<=d;i++)
    {
        if(a[i][i]!=0)
        {
            vong[i]=1;
            demV=1;
        }
    }
    if(demV==0)
        cout<<"Khong co vong:\n";
    else
    {
        cout<<"Cac dinh vong:\n";
        for(int i=1;i<=d;i++)
            if(vong[i])
                cout<<i<<endl;
    }
}
void ktraSongSongN()
{
    for(int i=1;i<=d;i++)
    {
        {
            for(int j=1;j<=d;j++)
            {
                  if(a[i][j]&&a[j][i]&&check1[i][j]&&i!=j){
                    check1[i][j]=check1[j][i]=0;
                    sn.push_back({i,j});
                }
            }
        }
    }
    if(!sn.size())
        cout<<"Khong co canh song song nguoc huong:\n";
    else
    {
        cout<<"Cac canh song song nguoc huong:\n";
        for(auto x:sn)
            cout<<x.first<<" "<<x.second<<endl;
    }

}
void ktraSongSongC()
{
    for(int i=0;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
            if(a[i][j]>1)
            {
                sc.push_back({i,j});
            }
    }
    if(!sc.size())
        cout<<"Khong co canh song song cung huong:\n";
    else
    {
        cout<<"Cac canh song song nguoc huong:\n";
        for(auto x:sc)
            cout<<x.first<<" "<<x.second<<endl;
    }

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
