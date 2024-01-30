#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int ktraCSC(int A[],int n);
void xuat(int k);
int main()
{
	int A[10000],n;      
	nhap(A,n);
	int k=ktraCSC(A,n);
	xuat(k);
	return 0;
} 
void nhap(int A[],int&n)
{	
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int ktraCSC(int A[],int n)
{
	if(n<=1)
		return 0;
	else
	{
		int d=A[1]-A[0];
		for(int i=1;i<n-1;i++)
			if(A[i+1]!=A[i]+d)
				return 0;
		return 1;
	}
}
void xuat(int k)
{
	if(k==1)
		cout<<"lap duoc";
	else 
		cout<<"khong lap duoc";
}
