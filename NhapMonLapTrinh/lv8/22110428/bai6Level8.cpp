#include<iostream>
using namespace std;
void doiChoMinMax(int A[],int n);
void nhap(int A[],int&n);
void xuat(int A[],int n);
int A[1000];
int main()
{
	int n;
	nhap(A,n);
	doiChoMinMax(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void doiChoMinMax(int A[],int n)
{
	int max=A[0];
	int ma=0;
	for(int i=1;i<n;i++)
		if(max<A[i])
		{
			max=A[i];
			ma=i;
		}
	int min=A[0];
	int mi=0;
	for(int i=1;i<n;i++)
		if(min>A[i])
		{
			min=A[i];
			mi=i;
		}
	int tam=A[mi];
	A[mi]=A[ma];
	A[ma]=tam;
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}







