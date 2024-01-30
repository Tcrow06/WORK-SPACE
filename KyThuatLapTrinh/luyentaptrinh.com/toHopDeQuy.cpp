#include<bits/stdc++.h>
using namespace std;

int n,k;
string c[105][105];
string tong(string a,string b)
{
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	if(a.size()<b.size())
		swap(a,b);
	while(a.size()>b.size()) b+='0';
	string s;
	int nho=0;
	for(int i=0;i<a.size();i++)
	{
		int x=(a[i]-'0')+(b[i]-'0')+nho;
		s+=char(x%10+'0');
		nho=x/10;
	}
	if(nho>0)
		s+=char(nho+'0');
	reverse(s.begin(),s.end());
	return s;
}
void tinh()
{
	for(int i=0;i<=n;i++)
    {
    	c[i][i]="1";
    	c[i][0]="1";
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<i;j++)
			c[i][j]=tong(c[i-1][j-1],c[i-1][j]);
	}
}

int main()
{
    cin>>n>>k;
   	tinh();
    cout<<c[n][k];

}

