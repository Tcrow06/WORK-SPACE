#include<iostream>
using namespace std;
void nhap(int A[],int&n,int&x);
void xuat(int k);
int viTriCuoiX(int A[],int n,int x);
int main()
{
	int A[10000],n,x;
	nhap(A,n,x);
	int k=viTriCuoiX(A,n,x);
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
int viTriCuoiX(int A[],int n,int x)
{
	for(int i=n-1;i>=0;i--)
	{
		if(A[i]==x)
		return i; 
	}
	return -1;
}
void xuat(int k)
{
	cout<<k;
}
