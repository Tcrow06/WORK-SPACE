#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int A[],int n);
void sapXepMang(int A[],int n);
int A[1000];
int main()
{
	int n;
	nhap(A,n);
	sapXepMang(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
void sapXepMang(int A[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if((A[j]%2==0&&A[i]%2!=0)||(A[i]==0&&A[j]%2==0)||(A[i]%2!=0&&A[j]==0))
			{
				int t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
}
