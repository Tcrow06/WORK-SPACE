#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
vector<pair<int,int>>sc;
vector<pair<int,int>>sn;
vector<pair<int,int>>vv;
int d,c,demV,demS,demC;
void nhapf();
void ktraSongSongC();
void check();
void ktraVong();
void ktraSongSongN();
int main()
{
    nhapf();
    check();
    cout<<endl;
    return 0;
}

void check()
{
    ktraSongSongC();
    ktraSongSongN();
    ktraVong();

}
void ktraVong()
{
    for(int i=0;i<c;i++)
    {
            if(v[i].first==v[i].second)
                vv.push_back(v[i]);
    }
    if(vv.size())
    {
        cout<<"\nCac canh vong:\n";
        for(auto x:vv)
            cout<<x.first<<" "<<x.second<<endl;
    }
    else
        cout<<"\nKhong co vong:\n";
}
void ktraSongSongN()
{
    for(int i=0;i<c;i++)
    {
        for(int j=i+1;j<c;j++)
            if(v[i].first==v[j].second&&v[i].second==v[j].first)
                sn.push_back(v[i]);
    }
    if(sn.size())
    {
         cout<<"\nCac canh song song nguoc huong:\n";
         for(auto x:sn)
            cout<<x.first<<" "<<x.second<<endl;
    }
    else
        cout<<"\nKhong co canh song song nguoc huong:\n";
}
void ktraSongSongC()
{
    for(int i=0;i<c;i++)
    {
        for(int j=i+1;j<c;j++)
            if(v[i].first==v[j].first&&v[i].second==v[j].second)
                sc.push_back(v[i]);
    }
    if(sc.size())
    {
         cout<<"\nCac canh song song cung huong:\n";
         for(auto x:sc)
            cout<<x.first<<" "<<x.second<<endl;
    }
    else
        cout<<"\nKhong co canh song song cung huong:";
}
void nhapt()
{
    cout<<"so dinh,canh:\n";
   cin>>d>>c;
   for(int i=0;i<c;i++)
   {
       pair<int,int>x;
       cin>>x.first>>x.second;
       v.push_back(x);
   }

}
void nhapf()
{
   ifstream in("in.txt");
   in>>d>>c;
   for(int i=0;i<c;i++)
   {
       pair<int,int>x;
       in>>x.first>>x.second;
       v.push_back(x);
   }

}
