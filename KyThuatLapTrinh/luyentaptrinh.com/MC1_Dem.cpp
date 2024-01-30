#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int&n,int&x)
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
bool ksnt(int a)
{
	if(a<2)
		return true;
	else
	{
		for(int i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
				return true;	
		}	
		return false;
	}	
}
int dem(int A[],int n,int x)
{
	int d=0;
	for(int i=0;i<n;i++)
		if(ksnt(A[i])&&A[i]>x)
				d++;
	return d;	
}
void xuat(int d)
{
	cout<<d;
}
int main()
{
	int A[100],n,x;
	nhap(A,n,x);
	int d=dem(A,n,x);
	xuat(d);
	return 0;
}
