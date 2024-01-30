#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
void nhap(int A[],int&n)
{
	cout<<"nhap n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void sapXep(int A[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(A[i]<A[j])
			{
				int t=A[i];
				A[i]=A[j];
				A[j]=t;	
			} 
		xuat(A,n);
//	for(int i=0;i<n;i++)
//		cout<<A[i]<<" ";
}
void chen(int A[],int&n)
{
	int x;
	cout<<"\nnhap so can chen: ";
	cin>>x;
	int i;
	for(i=0;i<n;i++)
		if(A[i-1]>=x&&x>=A[i])
			break;
	for(int j=n;j>i;j--)
		A[j]=A[j-1];
	A[i]=x;
	n++;
	xuat(A,n);
//	for(int i=0;i<n;i++)
//		cout<<A[i]<<" ";		
}
int main()
{
	int n;     
	int A[100];
	nhap(A,n);
	sapXep(A,n);
	chen(A,n);
}
