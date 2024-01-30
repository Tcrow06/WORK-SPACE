#include<iostream>
using namespace std;
void nhap(double A[],int&nA);
void xuat(double B[],int nB);
void kiemTra(double A[],int nA,double B[],int&nB);
double A[100],B[100];
int main()
{
	int nA,nB;
	nhap(A,nA);
	kiemTra(A,nA,B,nB);
	xuat(B,nB);
	return 0;
}
void nhap(double A[],int&nA)
{
	cin>>nA;
	for(int i=0;i<nA;i++)
		cin>>A[i];
}
void xuat(double B[],int nB)
{
	for(int i=0;i<nB;i++)
		cout<<B[i]<<" ";
}
void kiemTra(double A[],int nA,double B[],int&nB)
{
	nB=0;
	for(int i=0;i<nA;i++)
		if((A[i]*A[i+1])<0||(A[i]*A[i-1]<0))
		{
			B[nB++]=A[i];
		}
}
