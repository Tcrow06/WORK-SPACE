#include<bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,int>>k;
int a[100][100];
int D[100];
int truoc[100];
int d,c,s;
void nhapf();
set<int>T;
void dijkstra();
void nhapt();
int minDu();
int main()
{
    //nhapt();
    nhapf();
    for(int i=1;i<=d;i++)
        T.insert(i);
    dijkstra();
    return 0;
}
int minDu()
{
    int u=*T.begin();
    int min1=D[1];
    for(auto x:T)
    {
        if(D[x]<min1)
        {
            min1=D[x];
            u=x;
        }
    }
    return u;
}
void dijkstra()
{

    T.erase(s);
    for(auto v:T)
    {
        D[v]=a[s][v];
        truoc[v]=s;
    }
    while(T.size()!=0)
    {
        int u=minDu();
        T.erase(u);
        for(auto v:T)
            if(D[v]>D[u]+a[u][v]){
                D[v]=D[u]+a[u][v];
                truoc[v]=u;
            }
    }
    cout<<"ket qua\n";
    cout<<"u.d[u],truoc[u]\n";
    for(int i=s+1;i<=d;i++)
    {
        cout<<i<<"."<<D[i]<<","<<truoc[i]<<endl;
    }
    ofstream out("out.txt");
    out<<"ket qua\n";
    out<<"u.d[u],truoc[u]\n";
    for(int i=s+1;i<=d;i++)
    {
        out<<i<<"."<<D[i]<<","<<truoc[i]<<endl;
    }

}
void nhapt()
{
    cout<<"nhap so dinh,canh,va vi tri bau dau: ";
    cin>>d>>c>>s;
    for(int i=0;i<=d;i++)
        for(int j=0;j<=d;j++)
            a[i][j]=10000;
    cout<<"nhap cac canh dinh dau va dinh cuoi va trong so:\n";
    for(int i=0;i<c;i++)
    {
        pair<pair<int,int>,int>x;
        cin>>x.first.first>>x.first.second>>x.second;
        k.push_back(x);
        a[x.first.first][x.first.second]=x.second;
    }
}
void nhapf()
{
    ifstream input("in.txt");
    input>>d>>c>>s;
    for(int i=0;i<=d;i++)
        for(int j=0;j<=d;j++)
            a[i][j]=10000;
    for(int i=0;i<c;i++)
    {
        pair<pair<int,int>,int>x;
        input>>x.first.first>>x.first.second>>x.second;
        k.push_back(x);
        a[x.first.first][x.first.second]=x.second;
    }

}
