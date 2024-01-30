#include<bits/stdc++.h>
using namespace std;
void nhap(long long A[],long long&n);
void xoapt(long long A[],long long&n,int vt);
void xoa(long long A[],long long&n);
void xuat(long long A[],long long n)
{
	for(long long i=0;i<n;i++)
		cout<<A[i]<<" ";
}
int main()
{
	long long n,A[100000];
	nhap(A,n);
	xoa(A,n);
	xuat(A,n);
}
void nhap(long long A[],long long&n)
{
	cin>>n;
	for(long long i=0;i<n;i++)
		cin>>A[i];
}
void xoapt(long long A[],long long&n,long long vt)
{
	for(long long i=vt;i<n;i++)
		A[i]=A[i+1];
		n--;
}
void xoa(long long A[],long long&n)
{
	for(long long i=0;i<n;i++)
	{
		for(long long j=i+1;j<n;j++)
			if(A[i]==A[j])
			{
				xoapt(A,n,j);
				j--;
			}
	}
}
