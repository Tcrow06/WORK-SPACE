#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int t);
int soAmMax(int A[],int n);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	int t=soAmMax(A,n);
	xuat(t);
	return 0;
} 
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int t)
{
	if(t==0)
		cout<<"khong co gia tri am";
	else
		cout<<t;
}
int soAmMax(int A[],int n)
{	
	int t=0;
	int x;
	for(int i=0;i<n;i++)
		if(A[i]<0)
		{
			t=A[i];
			x=i;
			break;
		}
	for(int i=x+1;i<n;i++)
		if(A[i]<0&&A[i]>t)
			t=A[i];
	return t;
}
