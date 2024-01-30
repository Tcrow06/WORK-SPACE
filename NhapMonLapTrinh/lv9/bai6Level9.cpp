#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int tongCucTri(int A[],int n);
void xuat(int s);
int A[100];
int main()
{
	int n;
	nhap(A,n);
	int s=tongCucTri(A,n);
	xuat(s);
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int tongCucTri(int A[],int n)
{
	int k=0;
	for(int i=1;i<n-1;i++)
		if((A[i-1]<A[i]&&A[i]>A[i+1])||(A[i-1]>A[i]&&A[i]<A[i+1]))
			k+=A[i];
	return k;
}
void xuat(int s)
{
	cout<<s;
}
