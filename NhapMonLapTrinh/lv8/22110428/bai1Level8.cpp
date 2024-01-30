#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int ktraCL(int A[],int n);
void xuat(int k);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	int k=ktraCL(A,n);
	xuat(k);
	return 0;
}
void nhap(int A[],int&n)
{
	cout<<"so luong phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int ktraCL(int A[],int n)
{
	for(int i=0;i<n;i++)
		if((A[i]+A[i+1])%2==0)
			return 0;
	return 1;
}
void xuat(int k)
{
	if(k==1)	
		cout<<"co tinh chan le";
	else
		cout<<"khong co tinh chan le";
}
