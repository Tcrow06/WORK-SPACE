#include<bits/stdc++.h>
using namespace std;
void nhap(float A[],int&nA,float B[],int&nB);
void kiemTra(float A[],int nA,float B[],int nB,float C[],int&nC);
void xuat(float C[],int nC);
float A[1000],B[1000],C[1000];
int main()
{
	int nA,nB,nC;
	nhap(A,nA,B,nB);
	kiemTra(A,nA,B,nB,C,nC);
	xuat(C,nC);
	return 0;
}
void nhap(float A[],int&nA,float B[],int&nB)
{
	cout<<"so phan tu mang A: ";
	cin>>nA;
	cout<<"A[]=";
	for(int i=0;i<nA;i++)
		cin>>A[i];
	cout<<"so phan tu mang B: ";
	cin>>nB;
	cout<<"B[]=";
	for(int i=0;i<nB;i++)
		cin>>B[i];
}
void kiemTra(float A[],int nA,float B[],int nB,float C[],int&nC)
{
	int i,j;
	nC=0;
	for(i=0;i<nA;i++)
	{
		for(j=0;j<nB;j++)
			if(A[i]==B[j])
			{
				C[nC]=A[i];
				nC++;
				break;
			}
	}									
}
void xuat(float C[],int nC)
{
	for(int i=0;i<nC;i++)
		cout<<C[i]<<" ";
}






