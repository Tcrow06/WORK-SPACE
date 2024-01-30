#include<iostream>
using namespace std;
void sapXep(int A[],int n);
void nhap(int A[],int&n);
void xuat(int A[],int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	sapXep(A,n);
	xuat(A,n);
	return 0;
}
void xuat(int A[],int n){
	cout<<"mang da sap xep: \n";
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
void nhap(int A[],int&n)
{
	cout<<"nhap so luong phan tu: ";
	cin>>n;
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void sapXep(int A[],int n)
{
	int dem1=0,dem2=0,dem3=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]==1)
			dem1++;
		else
			if(A[i]==2)
				dem2++;
		else
			dem3++;
	}
	int i=0;
	for(;i<dem1;i++)
		A[i]=1;
	for(;i<dem1+dem2;i++)
		A[i]=2;
	for(;i<n;i++)
		A[i]=3;
}
