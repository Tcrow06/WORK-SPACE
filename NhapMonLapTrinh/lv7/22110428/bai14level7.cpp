#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int ktraSoLe(int A[],int n);
void xuat(int k);
int main()
{
	int A[10000],n;      
	nhap(A,n);
	int k=ktraSoLe(A,n);
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
int ktraSoLe(int A[],int n)
{
	for(int i=0;i<n;i++)
		if(A[i]%2==1)
			return 0;
	return 1;
}
void xuat(int k)
{
	cout<<k;
}
