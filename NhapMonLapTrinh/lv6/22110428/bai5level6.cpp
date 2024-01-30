#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(float tbChan);
float tinhTBCChan(int A[],int n);
int main()
{
	int A[10000],n;
	nhap(A,n);
	float tb=tinhTBCChan(A,n);
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
float tinhTBCChan(int A[],int n)
{
	int s=0;
	int d=0;
	for(int i=0;i<n;i++)
		if(A[i]%2==0)
		{
			s=s+A[i];
			d++;				
		}
	float t=(float)s/d;
		return t;
}
void xuat(float tbChan)
{
	cout<<tbChan;
}
