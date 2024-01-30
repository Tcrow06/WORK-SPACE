#include<iostream>
using namespace std;
void nhap(double A[],int&n);
void xuat(int d);
int demMax(double A[],int n);
double A[100];
int main()
{
	int n;
	nhap(A,n);
	int d=demMax(A,n);
	xuat(d);
	return 0;
}
void nhap(double A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int d)
{
	cout<<d;
}
int demMax(double A[],int n)
{
	int dem=0;
	int max=A[0];
	for(int i=1;i<n;i++)
		if(max<A[i])
			max=A[i];
	for(int i=0;i<n;i++)
		if(max==A[i])
			dem++;
	return dem;	
}
