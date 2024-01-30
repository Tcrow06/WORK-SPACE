#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
void xuat(int t);
int tong(int A[][50],int m,int n);
int main()
{
	int m,n;
	int A[50][50];
	nhap(A,m,n);
	int t=tong(A,m,n);
	xuat(t);
	return 0;
}
void nhap(int A[][50],int&m,int&n)
{
	cout<<"nhap dong: ";
	cin>>m;
	cout<<"nhap cot: ";
	cin>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
void xuat(int t)
{
	cout<<t;
}
int tong(int A[][50],int m,int n)
{
	int s=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
			s+=A[i][j];
	return s;
}

