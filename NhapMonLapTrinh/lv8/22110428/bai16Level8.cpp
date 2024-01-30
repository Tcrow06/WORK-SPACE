#include<iostream>
using namespace std;
void nhap(int A[],int&n,int&i);
void nhap(int &x);
void xoavitri(int A[],int&n,int i);
void themvitri(int A[],int&n,int i,int x);
void xuat1(int A[],int n);
void xuat2(int A[],int n);
int A[1000];
int main()
{
	int n,i,x;
	nhap(A,n,i);
	xoavitri(A,n,i);
	xuat1(A,n);	
	nhap(x);
	themvitri(A,n,i,x);
	xuat2(A,n);
	return 1;
}
void nhap(int A[],int&n,int&i)
{
	cout<<"so luong phan tu mang n=";
	cin>>n;
	cout<<"nhap mang: "<<endl;
	for(int a=0;a<n;a++)
		cin>>A[a];
	cout<<"nhap vi tri i can xoa i=";
	cin>>i;
}
void nhap(int &x)
{
	cout<<"them gia tri x vao vi tri i x=";
	cin>>x;
}
void xoavitri(int A[],int&n,int i)
{
	for(int a=i;a<n-1;a++)
		A[a]=A[a+1];		
	n--;			
}
void xuat1(int A[],int n)
{
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
	cout<<endl;
}
void themvitri(int A[],int&n,int i,int x)
{
	for(int a=n-1;a>=i;a--)
		A[a+1]=A[a];
	A[i]=x;
	n++;	
}
void xuat2(int A[],int n)
{
	for(int a=0;a<n;a++)
		cout<<A[a]<<" ";
}

