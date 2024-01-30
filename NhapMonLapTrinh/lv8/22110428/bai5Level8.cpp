#include<iostream>
using namespace std;
int ktraSong(int A[],int n);
void nhap(int A[],int&n);
void xuat(int k);
int A[1000];
int main()
{
	int n;
	nhap(A,n);
	int k=ktraSong(A,n);
	xuat(k);
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int k)
{
	if(k==1)
		cout<<"la dang song";
	else
		cout<<"khong phai";
		
}
int ktraSong(int A[],int n)
{
	for(int i=1;i<n-1;i++)
		if((A[i-1]<A[i]&&A[i]>A[i+1])||(A[i-1]>A[i]&&A[i]<A[i+1]))
			return 0;
	return 1;
}
