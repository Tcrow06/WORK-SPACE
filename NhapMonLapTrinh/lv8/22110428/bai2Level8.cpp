#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int ktra(int A[],int n);
void xuat(int k);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	int k=ktra(A,n);
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
int ktra(int A[],int n)
{
	for(int i=0;i<n;i++)
		if(A[i]==0&&A[i+1]==0)
			return 1;
	return 0;		
}
void xuat(int k)
{
	if(k==1)
		cout<<"dung";
	else
		cout<<"khong dung";
}
