#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int mn);
int timMaxNhi(int A[],int n);
int A[1000];
int main()
{
	int n;
	nhap(A,n);
	int mn=timMaxNhi(A,n);
	xuat(mn);
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int mn)
{
	cout<<mn;
}
int timMaxNhi(int A[],int n)
{
	int max=A[0]; 
	int k;
	for(int i=1;i<n;i++)
		if(A[i]>max)
		{
			k=max;
			max=A[i];
		}	
	return k;
}
