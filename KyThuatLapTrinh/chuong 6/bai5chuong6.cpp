#include<bits/stdc++.h>
#define SIZE 100
using namespace std;

void nhap(int A[][SIZE],int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
int nhan1(int A[][SIZE],int B[][SIZE],int hang,int cot,int n)
{
	int x=0;
	for(int i=0;i<n;i++)
	{
		x+=A[hang][i]*B[i][cot];
	}
	return x;
}
void nhan(int A[][SIZE],int B[][SIZE],int C[][SIZE],int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			C[i][j]=nhan1(A,B,i,j,n);
}
void xuat(int C[][SIZE],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<C[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	int n,A[SIZE][SIZE],B[SIZE][SIZE],C[SIZE][SIZE];
	cin>>n;
	nhap(A,n);
	nhap(B,n);
	nhan(A,B,C,n);
	xuat(C,n);
	return 0;
}
