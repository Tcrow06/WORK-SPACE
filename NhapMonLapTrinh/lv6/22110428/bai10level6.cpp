#include<iostream>
using namespace std;
void nhap(int A[],int&n,int&x);
void xuat(int k);
int demX(int A[],int n,int x);
int main()
{
	int n,x;
	int A[10000];
	nhap(A,n,x);
	int k=demX(A,n,x);
	xuat(k);
	return 0;
} 
void nhap(int A[],int&n,int&x)
{	
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"nhap x=";
	cin>>x;
}
int demX(int A[],int n,int x)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]==x)
		dem++;
	}
	return dem;
}
void xuat(int k)
{
	cout<<k;
}
