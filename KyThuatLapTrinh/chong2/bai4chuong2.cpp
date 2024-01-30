#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
void chuyen(int A[][50],int m,int n,int E[],int&a);
void xuat(int E[],int n);
int main()
{
	int m,n,A[50][50],E[100],a;
	nhap(A,m,n);
	chuyen(A,m,n,E,a);
	xuat(E,a);
	return 0;
}
void nhap(int A[][50],int&m,int&n)
{
	cout<<"nhap hang,cot: ";
	cin>>m>>n;
	cout<<"nhap mang: \n";
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];	
}
void chuyen(int A[][50],int m,int n,int E[],int&a)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			E[a++]=A[i][j];
}
void xuat(int E[],int a)
{
	for(int i=0;i<a;i++)
		cout<<E[i]<<" ";
}





