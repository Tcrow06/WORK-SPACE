#include<bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,int>>v;
vector<pair<int,int>>path;
int d,c;
int a[100],trongSo=0;
void capNhat(int x,int y);
void nhapf();
void nhapt();
void kruskal();

int main()
{
    //nhapt();
    nhapf();
    kruskal();
}
void nhapf()
{
    ifstream input("in.txt");
    input>>d>>c;

    for(int i=1;i<=c;i++)
    {
        pair<pair<int,int>,int>x;
        input>>x.first.first>>x.first.second>>x.second;
        v.push_back(x);
    }
    for(int i=0;i<=d;i++)
        a[i]=i;

}
void nhapt()
{
    cout<<"nhap so dinh,canh: ";
    cin>>d>>c;

    cout<<"dinh dau ,cuoi va trong so:\n";

    for(int i=1;i<=c;i++)
    {
        pair<pair<int,int>,int>x;
        cin>>x.first.first>>x.first.second>>x.second;
        v.push_back(x);
    }
    for(int i=0;i<=d;i++)
        a[i]=i;
}
void kruskal()
{


    sort(v.begin(),v.end(),[](const auto&lhs,const auto &rhs){
          return lhs.second<rhs.second;
    });
    cout<<"cac canh cua cay khung be nhat:\n";
    for(auto x:v)
    {

        if(a[x.first.first]!=a[x.first.second])
        {

            trongSo+=x.second;
            cout<<x.first.first<<" "<<x.first.second<<endl;
            path.push_back({x.first.first,x.first.second});
            capNhat(x.first.first,x.first.second);
        }
    }
    cout<<"tong trong so: "<<trongSo<<endl;
    ofstream output("output.txt");
    output<<"cac canh cua cay khung be nhat:"<<endl;
    for(int i=0;i<path.size();i++)
    {
       output<<path[i].first<<" "<<path[i].second<<endl;
    }
    output<<"tong trong so: "<<trongSo<<endl;


}

void capNhat(int x,int y)
{
    int mi=min(x,y);
    int ma=max(x,y);
    for(int i=0;i<d;i++)
    {
        if(a[i]==ma)
            a[i]=mi;
    }
}
/*
5 9
0 1 4
0 2 2
0 4 3
1 3 5
2 3 1
2 4 6
2 5 3
3 5 6
4 5 2
*/


