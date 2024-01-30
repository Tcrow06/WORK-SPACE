#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int A[],int n);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	xuat(A,n);
	return 0;
} 
void nhap(int A[],int&n)
{
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
