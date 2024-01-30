#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int max(int A[],int n);
int main()
{
	int A[10000],n;
	nhap(A,n);
	int k=max(A,n);
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
int max(int A[],int n)
{
	int max=A[0];
	for(int i=0;i<n;i++)
	{
		if(A[i]>max)
		max=A[i];
	}
	return max;
}
void xuat(int k)
{
	cout<<k;
}
