#include<iostream>
#include<string.h>
using namespace std;
void nhap(int A[],int&nA,int B[],int&nB);
void xuat(int C[],int nC);
void kiemTraKhongLap(int A[],int nA,int B[],int nB,int C[],int&nC);
int A[1000],B[1000],C[1000];
int main()
{
	int nA,nB,nC;
	nhap(A,nA,B,nB);
	kiemTraKhongLap(A,nA,B,nB,C,nC);
	xuat(C,nC);
	return 0;
}
void nhap(int A[],int&nA,int B[],int&nB)
{
	cout<<"so luong phan tu mang A: ";
	cin>>nA;
	cout<<"A[]=";
	for(int i=0;i<nA;i++)
		cin>>A[i];
	cout<<"so luong phan tu mang B: ";
	cin>>nB;
	cout<<"B[]=";
	for(int i=0;i<nB;i++)
		cin>>B[i];
}
void xuat(int C[],int nC)
{
	for(int i=0;i<nC;i++)
		cout<<C[i]<<" ";
}
void kiemTraKhongLap(int A[],int nA,int B[],int nB,int C[],int&nC)
{
	bool k[100],e[100];
	memset(k,true,sizeof(k));
	memset(e,true,sizeof(e));
	nC=0;
	int i,j;
	for( i=0;i<nA;i++)
	{
		for( j=0;j<nB;j++)
			if(A[i]==B[j])
			{
				k[i]=false;
				e[j]=false;
			}
		if(k[i])
			C[nC++]=A[i];
	}
	for(j=0;j<nB;j++)
		if(e[j])
			C[nC++]=B[j];
}











