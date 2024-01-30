#include<bits/stdc++.h>
using namespace std;
multimap<int,int> mp;
int ke(int v,int i);
void dfs(int v);
int a[100];
int d,c;
vector<int>path;
void nhapf();
void xuatf();
void nhapt();
int main()
{
    //nhapt();
	nhapf();
	cout<<"cay khung theo chieu sau:\n";
    dfs(1);
    xuatf();

}
void xuatf()
{
    ofstream output("out.txt");
    output<<"cay khung theo chieu sau:\n";
    for(auto x:path)
    {
        output<<x<<endl;
    }
}
void nhapf()
{
    for(int i=1;i<20;i++)
        a[i]=1;
    ifstream input("in.txt");
    input>>d>>c;
    for(int i=0;i<c;i++)
	{
		int x,y;input>>x>>y;
		mp.insert({x,y});
	}


}
void nhapt()
{
    cout<<"nhap so dinh ,canh: ";
	cin>>d>>c;
    for(int i=1;i<20;i++)
        a[i]=1;

	cout<<"nhap tap hop: \n";
	for(int i=0;i<c;i++)
	{
		int x,y;cin>>x>>y;
		mp.insert({x,y});
	}
}
int ke(int v,int i){
    for(auto x:mp)
        if((x.first==v&&x.second==i)||(x.first==i&&x.second==v))
                return 1;
    return 0;
}
void dfs(int v){
    a[v]=0;
    path.push_back(v);
    cout<<v<<" ";
    for(int i=1;i<=d;i++){
        if(ke(v,i)){
            if(a[i])
                dfs(i);
        }
    }
}
/*9 10
1 2
1 3
1 5
2 4
3 6
3 7
9 3
5 8
6 7
8 9*/





