#include<iostream>
using namespace std;
void nhap(int A[],int&m,int&n);
void chuyen(int A[],int m,int n,int E[][50]);
void xuat(int E[][50],int m,int n);
int main()
{
	int A[100],m,n,E[50][50];
	nhap(A,m,n);
	chuyen(A,m,n,E);
	xuat(E,m,n);
	return 0;
}
void xuat(int E[][50],int m,int n)
{
	cout<<"mang 2 chieu: \n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<E[i][j]<<" ";
		cout<<endl;
	}	
	
			
}
void chuyen(int A[],int m,int n,int E[][50])
{
	int a=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			E[i][j]=A[a++];
}
void nhap(int A[],int&m,int&n)
{
	cout<<"nhap m,n: ";
	cin>>m>>n;
	int a=m*n;
	cout<<"nhap mang: ";
	for(int i=0;i<a;i++)
		cin>>A[i];	
}
