#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(float tb);
float tinhTBC(int A[],int n);
int main()
{
	int A[10000],n;
	nhap(A,n);
	float tb=tinhTBC(A,n);
	xuat(tb);
	return 0;
} 
void nhap(int A[],int&n)
{
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
float tinhTBC(int A[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
		s=s+A[i];
	float t=(float)s/n;
		return t;
}
void xuat(float tb)
{
	cout<<tb;
}
