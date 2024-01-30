#include<iostream>
using namespace std;
void nhap(int A[],int&n,int&x);
void xuat(int A[],int n);
void chenTangDan(int A[],int&n,int x);
int A[1000];
int main()
{
	int n,x;
	nhap(A,n,x);
	chenTangDan(A,n,x);
	xuat(A,n);
	return 0;
}
void nhap(int A[],int&n,int&x)
{
	cout<<"n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"x=";
	cin>>x;
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
void chenTangDan(int A[],int&n,int x)
{
	int c;
	for(int i=0;i<n;i++)
		if((A[i-1]<x&&x<A[i]))
			c=i;
	for(int i=n-1;i>=c;i--)
		A[i+1]=A[i];
	A[c]=x;
	n++;
}











