#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int&n,int&kl)
{
	cin>>n>>kl;
	for(int i=1;i<=n;i++)
		cin>>a[i];
}
void xuat(int f[][100],int k[],int a[],int n,int w)
{
	cout<<f[n][w]<<endl;
	for(int i=1;i<=n;i++)
		if(k[i])
			cout<<a[i]<<" ";
		
}
int main()
{
	int n,a[1000],w;
	nhap(a,n,w);
	int f[100][100]={0};
	for(int i=1;i<=n;i++)
		for(int j=1;j<=w;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=a[i])
				f[i][j]=max(f[i][j],f[i-1][j-a[i]]+a[i]);
		}	
	int k[1000]={0};
	int x=n,y=w;
	while(x>0)
	{
		if(f[x][y]>f[x-1][y])
		{
			k[x]=1;
			y=y-a[x];
		}
		x--;
	}
	xuat(f,k,a,n,w);
	return 0;
}




