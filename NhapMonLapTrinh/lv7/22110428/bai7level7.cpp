#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int tongSoChinhPhuong(int A[],int n);
bool sCP(int i);
int main()
{
	int A[10000],n;      
	nhap(A,n);
	int k=tongSoChinhPhuong(A,n);
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
int tongSoChinhPhuong(int A[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(sCP(A[i]))
		s+=A[i] ;
	}
	return s;
}
void xuat(int k)
{
	cout<<k;
}
bool sCP(int i)
{
	float t=sqrt(i);
	if(t-(int)t==0)
		return true;
	else
		return false;
}



