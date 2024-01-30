#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int s);
int tinhTong(int A[],int n);
int main()
{
	int A[10000],n;
	nhap(A,n);
	int s=tinhTong(A,n);
	xuat(s);
	return 0;
} 
void nhap(int A[],int&n)
{
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int tinhTong(int A[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
		s=s+A[i];
	return s;
}
void xuat(int s)
{
	cout<<s;
}
