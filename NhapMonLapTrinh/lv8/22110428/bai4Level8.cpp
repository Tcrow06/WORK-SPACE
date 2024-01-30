#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int timSoLeDauTien(int A[],int n);
int A[100];
int main()
{
	int n;
	nhap(A,n);
	int k=timSoLeDauTien(A,n);
	xuat(k);
	return 0;	
} 
void nhap(int A[],int&n)
{
	cout<<" so luong phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int k)
{
	cout<<k;
}
int timSoLeDauTien(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		int d=A[i];
		while(d>=10)
		{
			d=d/10;
		}
		if(d%2==1)
			return A[i];
	}
	return 0;
}
