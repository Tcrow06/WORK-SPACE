#include<iostream>
using namespace std;
void nhap(int a[],int n,int&t)
{
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		t+=a[i];
	}
}
void xet(int a[],int f[],int t,int n)
{
	t=t/2;
	for(int i=1;i<=t;i++)
	{
		f[i]=n+1;
		for(int j=1;j<=n;j++)
			if(i>=a[j]&&j>f[i-a[j]])
			{
				f[i]=j;
				break;	
			}
	}
}
void xuat(int a[],int f[],int d[],int t,int n)
{
	int sum=t;
	t=t/2;
	while(f[t]>n) t--;
	int s=0;
	while(t>0)
	{
		d[f[t]]=1;
		s+=a[f[t]];
		t=t-a[f[t]];	
	}
	cout<<sum-2*s<<endl;
	for(int i=1;i<=n;i++)
		if(d[i])
			cout<<a[i]<<" ";
	cout<<endl;
	for(int i=1;i<=n;i++)
		if(!d[i])
			cout<<a[i]<<" ";
	
}
int main()
{
	int n,f[10001],t=0,d[10001];
	cin>>n;
	int a[n+1];
	nhap(a,n,t);
	xet(a,f,t,n);
	xuat(a,f,d,t,n);
	return 0;
}





