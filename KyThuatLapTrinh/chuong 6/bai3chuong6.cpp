#include<iostream>
using namespace std;
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
void F(int A[],int n)
{
	A[0]=0;
	A[1]=1;
	for(int i=2;i<n;i++)
		A[i]=A[i-1]+A[i-2];
}

int main()
{
	int n;
	int A[100];
	cin>>n;
	F(A,n);
	xuat(A,n);
}
