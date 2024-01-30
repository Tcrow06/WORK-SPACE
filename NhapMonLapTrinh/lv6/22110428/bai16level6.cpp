#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int viTriCuoiX(int A[],int n);
int main()
{
	int A[10000],n;
	nhap(A,n);
	int k=viTriCuoiX(A,n);
	xuat(k);
	return 0;
} 
void nhap(int A[],int&n)
{	
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int viTriCuoiX(int A[],int n)
{
	for(int i=n-1;i>=0;i--)
	{
		if(A[i]>0)
		return i; 
	}
	return -1;
}
void xuat(int k)
{
	cout<<k;
}
