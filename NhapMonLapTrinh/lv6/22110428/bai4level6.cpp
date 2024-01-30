#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(float tb5);
float tinhTBC5(int A[],int n);
int main()
{
	int A[10000],n;
	nhap(A,n);
	float tb5=tinhTBC5(A,n);
	xuat(tb5);
	return 0;
} 
void nhap(int A[],int&n)
{
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
float tinhTBC5(int A[],int n)
{
	int s=0;
	int d=0;
	for(int i=0;i<n;i++)
		if(A[i]%5==0)
		{
			s=s+A[i];
			d++;
		}
	float t=(float)s/d;
		return t;
}
void xuat(float tb5)
{
	cout<<tb5;
}
