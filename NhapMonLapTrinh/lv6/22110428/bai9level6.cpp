#include<iostream>
using namespace std;
void nhap(int A[],int&n,int&x);
void xuat(int s);
int tongLonHonX(int A[],int n,int x);
int main()
{
	int n,x;
	int A[10000];
	nhap(A,n,x);
	int s=tongLonHonX(A,n,x);
	xuat(s);
	return 0;
} 
void nhap(int A[],int&n,int&x)
{
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"nhap x= ";
	cin>>x;
}
int tongLonHonX(int A[],int n,int x)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]>x)
		s=s+A[i];
	}
	return s;
}
void xuat(int s)
{
	cout<<s;
}
