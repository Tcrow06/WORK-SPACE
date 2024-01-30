#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int snt(int A[],int n);
bool laSnt(int x);
int timMin(int A[],int n);
int A[100];
int main()
{
	int n;
	nhap(A,n);
	int min=snt(A,n);
	cout<<min;
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int snt(int A[],int n)
{
	int B[100];
	int nb=0;
	for(int i=0;i<n;i++)
		if(laSnt(A[i]))
		B[nb++]=A[i];
	int t=timMin(B,nb);
	return t;
}
bool laSnt(int x)
{
	if(x<=1)
		return false;
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
	return true;
}

int timMin(int A[],int n)
{	
	if(n==1)
		return A[0];
	else
	{
		int x=timMin(A,n-1);
		if(A[n-1]<x)
			return A[n-1];
		else
			return x;
	}
}
