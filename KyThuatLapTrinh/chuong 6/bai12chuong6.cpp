#include<bits/stdc++.h>
using namespace std;
void qhd(string a,string b)
{
	int n=a.size();
	int m=b.size();
	int F[n+1][m+1];
	for(int i=0;i<=n;i++)
	{
		F[0][i]=0;
		F[i][0]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
				F[i][j]=F[i-1][j-1]+1;
			else
				F[i][j]=max(F[i][j-1],F[i-1][j]);
		}
	}
	cout<<F[n][m];
	
}
int main()
{
	string a,b;
	cin>>a>>b;
	qhd(a,b);	
}
