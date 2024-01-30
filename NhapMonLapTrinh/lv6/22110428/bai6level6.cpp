#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int d);
int demSoAm(int A[],int n);
int main()
{
	int A[10000],n;
	nhap(A,n);
	int d=demSoAm(A,n);
	xuat(d);
	return 0;
} 
void nhap(int A[],int&n)
{
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int demSoAm(int A[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(A[i]<0)
			dem++;
	return dem;
}
void xuat(int d)
{
	cout<<d;
}
