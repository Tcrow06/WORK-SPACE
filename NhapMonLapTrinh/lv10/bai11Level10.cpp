#include<iostream>
using namespace std;
void nhap(int A[][50],int&m1,int&n1,int k);
void xuat(int t);
int tongHaiMaTran(int A[][50],int m1,int n1,int B[][50],int m2,int n2);
int tong(int A[][50],int m,int n);
int main()
{
	int m1,m2,n1,n2,k;
	int A[50][50];
	int B[50][50];
	k=1;
	nhap(A,m1,n1,k);
	k=2; 
	nhap(B,m2,n2,k);
	int t=tongHaiMaTran(A,m1,n1,B,m2,n2);
	xuat(t);
	return 0;
}
void nhap(int A[][50],int&m1,int&n1,int k)
{
	
	cout<<"ma tran thu "<<k<<endl;
	cout<<"nhap dong: ";
	cin>>m1;
	cout<<"nhap cot: ";
	cin>>n1;
	cout<<"nhap ma tran:"<<endl;;
	for(int i=0;i<m1;i++)
		for(int j=0;j<n1;j++)
			cin>>A[i][j];
}
void xuat(int t)
{
	cout<<t;
}
int tongHaiMaTran(int A[][50],int m1,int n1,int B[][50],int m2,int n2)
{
	int s=tong(A,m1,n1)+tong(B,m2,n2);
	return s;
}
int tong(int A[][50],int m,int n)
{
	int s=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
			s+=A[i][j];
	return s;
}

