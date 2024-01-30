#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int A[],int n);
void daoNguocMang(int A[],int n);
void hoandoi(int&x,int&y);
int main()
{
	int A[10000],n;
	nhap(A,n);
	daoNguocMang(A,n);
	xuat(A,n);
	return 0;
} 
void nhap(int A[],int&n)
{	
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void daoNguocMang(int A[],int n)
{
	int x=0;
	int y=n-1; 
	while(x<y)
	{
		hoandoi(A[x],A[y]);
		x++;
		y--;
	}
}
void hoandoi(int&x,int&y)
{
	int t=x;
	x=y;
	y=t;
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";	
}
