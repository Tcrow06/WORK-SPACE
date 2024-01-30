#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int gtriChanMin(int A[],int n);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	int k=gtriChanMin(A,n);
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
	cout<<k;
}
int gtriChanMin(int A[],int n)
{
	int t=-1;
	int x;
	for(int i=0;i<n;i++)
		if(A[i]>=0&&A[i]%2==0)
		{
			t=A[i];
			x=i;
			break;
		}
	for(int i=x+1;i<n;i++)
		if(A[i]>=0&&A[i]%2==0&&A[i]<t)
			t=A[i];
	return t;
}
