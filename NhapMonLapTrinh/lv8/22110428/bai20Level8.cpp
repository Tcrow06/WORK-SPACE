#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int A[],int n);
void sapXep(int A[],int n);
int A[1000];
int main()
{
	int n;
	nhap(A,n);
	sapXep(A,n);
	xuat(A,n);
	return 0;
}
void sapXep(int A[],int n)
{
	if(A[0]<A[1])
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if(A[i]>A[j])
				{
					int t=A[i];
					A[i]=A[j];
					A[j]=t;
				} 
	if(A[0]>A[1])
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if(A[i]<A[j])
				{
					int t=A[i];
					A[i]=A[j];
					A[j]=t;
				}	
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
