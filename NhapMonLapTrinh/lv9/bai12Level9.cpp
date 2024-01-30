#include<iostream>
using namespace std;
void nhap(double A[],int&n);
void xuat(double A[],int n);
void xoaMax(double A[],int&n);
void xoaPhanTu(double A[],int&n,int vitri);
double A[1000];
int main() 
{
	int n;
	nhap(A,n);
	xoaMax(A,n);
	xuat(A,n);
	return 0;
}
void nhap(double A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(double A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
void xoaPhanTu(double A[],int&n,int vitri)
{
	for(int i=vitri;i<n;i++) 
		A[i]=A[i+1];
	n--;
}
void xoaMax(double A[],int&n)
{
	int k;
	double max=A[0];
	for(int i=1;i<n;i++)
		if(A[i]>max)
		{
			max=A[i];
			k=i;
		}
	for(int i=k;i<n;i++) 
		if(A[i]==max)
		{
			xoaPhanTu(A,n,i);
			i--;
		}
}

