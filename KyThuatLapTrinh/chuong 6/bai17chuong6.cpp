#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int c[],int&n,int&w)
{
	cin>>n>>w;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
}
void tinh(int f[][100],int x[][100],int a[],int c[],int n,int w)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			x[i][j]=0;
			f[i][j]=f[i-1][j];
			for(int e=1;e<=j/a[i];e++)
			{
				f[i][j]=max(f[i][j],f[i-1][j-a[i]*e]+c[i]*e);
				if(f[i][j]!=f[i-1][j])
					x[i][j]=e;
			}
		}
	}
	
}
int main()
{
	int n,w;
	int a[100],c[100];
	nhap(a,c,n,w);
	int f[100][100]={0};
	int x[100][100];
	tinh(f,x,a,c,n,w);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
			cout<<f[i][j]<<" ";
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
			cout<<x[i][j]<<" ";
		cout<<endl;
	}
	int d[100]={0};
	int e[100]={0};
	int n1=n,w1=w;
	while(n1>0) 
	{
		if(f[n1][w1]>f[n1-1][w1])
		{
			d[n1]=1;
			int r=w1;
			w1=w1-a[n1]*x[n1][r];
			e[n1]=x[n1][r];
		}
		n1--;
	}
	cout<<endl;
	cout<<f[n][w]<<endl;
	cout<<"cac mon duoc chon : \n";
	for(int i=1;i<=n;i++)
	{
		if(d[i])
		{
			cout<<"chon "<<e[i]<<" mon hang loai "<<i<<", moi mon co khoi luong "<<a[i]<<" va gia tri la "<<c[i]<<endl;
		}
	}
	
}





