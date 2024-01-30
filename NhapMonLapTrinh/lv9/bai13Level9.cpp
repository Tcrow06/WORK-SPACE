#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
void xuat(int A[],int n);
void xoaSCP(int A[],int&n);
void xoaPhanTu(int A[],int&n,int vitri);
bool soChinhPhuong(int x);
int A[1000];
int main() 
{
	int n;
	nhap(A,n);
	xoaSCP(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
void xoaPhanTu(int A[],int&n,int vitri)
{
	for(int i=vitri;i<n;i++) 
		A[i]=A[i+1];
	n--;
}
void xoaSCP(int A[],int&n)
{

	for(int i=0;i<n;i++) 
		if(soChinhPhuong(A[i]))
		{
			xoaPhanTu(A,n,i);
			i--;
		}
}
bool soChinhPhuong(int x)
{
	if(sqrt(x)==(int)sqrt(x))
		return true;
	else
		return false;
}

