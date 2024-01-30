#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&na,int B[],int&nb);
void ghep(int A[],int na,int B[],int nb,int C[],int&nc);
void chuyen1(int E[],int e,int C[],int&nc,int n);
void xuat(int E[],int a);
int max(int x,int y);
int main()
{
	int A[50],na,B[50],nb,C[50],nc;
	nhap(A,na,B,nb);
	ghep(A,na,B,nb,C,nc);
	xuat(C,nc);
	return 0;
}
void xuat(int E[],int a)
{
	for(int i=0;i<a;i++)
		cout<<E[i]<<" ";
}
void ghep(int A[],int na,int B[],int nb,int C[],int&nc)
{
	nc=0;
	int n=min(na,nb);
	for(int i=0;i<n;i++)
	{
		C[nc]=A[i];
		nc++;
		C[nc]=B[i];
		nc++;
	}
	if(na>nb)
		chuyen1(A,na,C,nc,n);
	else
		if(na<nb)
		chuyen1(B,nb,C,nc,n);
	
}
int min(int x,int y)
{
	if(x<y)
		return x;
	else
		return y;
}
void chuyen1(int E[],int e,int C[],int&nc,int n)
{
	for(int i=n;i<e;i++)
	{
		C[nc]=E[i];
		nc++;
	}
}
void nhap(int A[],int&na,int B[],int&nb)
{
	cout<<"so phan tu mang A: ";
	cin>>na;
	for(int i=0;i<na;i++)
		cin>>A[i];
	cout<<"so phan tu mang B: ";
	cin>>nb;
	for(int i=0;i<nb;i++)
		cin>>B[i];	
}







