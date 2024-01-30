#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int d,c,demV,demS,demC;
void nhapf();
void ktraSongSong();
void check();
void ktraVong();
void ktraCoLap();
int main()
{
    nhapf();
    check();
}
void ghi()
{
    ofstream out("out.txt");
    if(demS==0)
        out<<"Khong co canh song song\n";
    else
        out<<"Co canh song song\n";
    if(demV==0)
        out<<"Khong co vong\n";
    else
        out<<"Co vong\n";
    if(demC)
        out<<"Co dinh co lap\n";
    else
        out<<"Khong co dinh co lap\n";
}

void check()
{
    ktraSongSong();
    ktraVong();
    ktraCoLap();
    ghi();
}
void ktraCoLap()
{
    int a[100]={0};
    for(int i=0;i<d;i++)

        for(int j=0;j<c;j++)
        {
                if(v[j].first==v[j].second&&v[j].first==i)
                    a[i]+=2;
                else if(v[j].first==i||v[j].second==i)
                    a[i]++;
        }
    demC=0;
    for(int i=0;i<d;i++)
        if(!a[i])
            demC++;
    if(demC)
        cout<<"Co dinh co lap\n";
    else
        cout<<"Khong co dinh co lap\n";


}
void ktraVong()
{
    demV=0;
    for(int i=0;i<c;i++)
    {
            if(v[i].first==v[i].second)
                demV++;
    }
    if(demV==0)
        cout<<"Khong co vong\n";
    else
        cout<<"Co vong\n";
}
void ktraSongSong()
{
    demS=0;
    for(int i=0;i<c;i++)
    {
        for(int j=i+1;j<c;j++)
            if((v[i].first==v[j].first&&v[i].second==v[j].second)||(v[i].first==v[j].second&&v[i].second==v[j].first))
                demS++;
    }
    if(demS==0)
        cout<<"Khong co canh song song\n";
    else
        cout<<"Co canh song song\n";

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
