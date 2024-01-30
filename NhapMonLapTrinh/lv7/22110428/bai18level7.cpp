#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int ktraSNT(int A[],int n);
bool snt(int i);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	int k=ktraSNT(A,n);
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
void xuat(int k)
{
	if(k==1)
		cout<<"dung";
	else
		cout<<"sai";
}
int ktraSNT(int A[],int n)
{
	for(int i=0;i<n;i++)
		if(snt(A[i])==false)
			return 0;
	return 1;
}
bool snt(int i)
{
	if(i<=1)
		return false;
	else
	{
		for(int j=2;j<=sqrt(i);j++)
			if(i%j==0)
				return false;
		return true;	
	}
}




