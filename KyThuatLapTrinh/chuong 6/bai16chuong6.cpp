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
void tinh(int f[][100],int a[],int c[],int n,int w)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=a[i])
			{
				f[i][j]=max(f[i][j],f[i-1][j-a[i]]+c[i]);
			}
		}
	}
	

}
void xuat(int f[][100],int a[],int c[],int n,int w)
{
	int d[100]={0};
	
	cout<<endl<<f[n][w]<<endl;
	
	int n1=n,w1=w;
	while(n1>0)
	{
		if(f[n1][w]>f[n1-1][w])
		{
			d[n1]=1;
			w=w-a[n1];
		}
		n1--;
	}
		
	for(int i=1;i<=n;i++)
		if(d[i])
			cout<<i<<"("<<a[i]<<","<<c[i]<<")"<<" ";
	cout<<endl;
}
int main()
{
	int n,w;
	int a[100],c[100],f[100][100]={0};
	nhap(a,c,n,w);
	tinh(f,a,c,n,w);
	xuat(f,a,c,n,w);
	return 0;
	
}
