#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&nA);
void xuat(int B[],int nB);
void kiemTra(int A[],int nA,int B[],int&nB);
int A[100],B[100];
int main()
{
	int nA,nB;
	nhap(A,nA);
	kiemTra(A,nA,B,nB);
	xuat(B,nB);
	return 0;
}
void nhap(int A[],int&nA)
{
	cin>>nA;
	for(int i=0;i<nA;i++)
		cin>>A[i];	
}
void xuat(int B[],int nB)
{
	for(int i=0;i<nB;i++)
		cout<<B[i]<<" ";
}
void kiemTra(int A[],int nA,int B[],int&nB)
{
	nB=0;
	for(int i=0;i<nA-1;i++)
		if(A[i]>abs(A[i+1]))
			B[nB++]=A[i];
}
