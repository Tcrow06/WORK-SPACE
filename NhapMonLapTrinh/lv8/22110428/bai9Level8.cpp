#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int sntMax(int A[],int n);
bool snt(int i);
int main()
{
	int A[10000],n;      
	nhap(A,n);
	int k=sntMax(A,n);
	xuat(k);
	return 0;
} 
void nhap(int A[],int&n)
{	
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int sntMax(int A[],int n)
{
	int t=0;
	int x;
	for(int i=0;i<n;i++)
		if(snt(A[i]))
		{
			t=A[i];
			x=i;
			break;
		}
	for(int i=x+1;i<n;i++)
		if(snt(A[i])&&A[i]>t)
			t=A[i];
	return t;	
}
void xuat(int k)
{
	cout<<k;
}	
bool snt(int i)
{                 
	if(i<=1)              
		return false;
	else         
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				return false;
		}
		return true;
	}
}

