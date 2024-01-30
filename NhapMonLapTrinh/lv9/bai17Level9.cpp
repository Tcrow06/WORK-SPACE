#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int A[],int n);
void dichMang(int A[],int n);
int A[1000];
int main()
{
	int n;
	nhap(A,n);
	dichMang(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
void dichMang(int A[],int n)
{
	int x=A[0];
	for(int i=0;i<n-1;i++)
	{
		A[i]=A[i+1];
	}
	A[n-1]=x;
}
