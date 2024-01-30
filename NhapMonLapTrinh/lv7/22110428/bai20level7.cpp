#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int ktraDoiXung(int A[],int n);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	int k=ktraDoiXung(A,n);
	xuat(k);
	return 0;
}
void nhap(int A[],int&n)
{
	cout<<"nhap so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int k)
{
	if(k==1)
		cout<<"doi xung";
	else
		cout<<"khong doi xung";
}
int ktraDoiXung(int A[],int n)
{
	for(int i=0;i<n/2;i++)
			if(A[i]!=A[n-1-i])
				return 0;
	return 1;
}







