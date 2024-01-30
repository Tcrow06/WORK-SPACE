#include<iostream>
using namespace std;
void nhap(int A[],int&nA);
void ganMang(int A[],int nA,int B[],int&nB,int C[],int&nC);
void xuat(int B[],int nB,int C[],int nC);
int A[1000],C[1000],B[1000];
int main()
{
	int nA,nB,nC;
	nhap(A,nA);
	ganMang(A,nA,B,nB,C,nC);
	xuat(B,nB,C,nC);
	return 0;
}
void nhap(int A[],int&nA)
{
	cin>>nA;
	for(int i=0;i<nA;i++)
		cin>>A[i];
}
void ganMang(int A[],int nA,int B[],int&nB,int C[],int&nC)
{
	nB=0;
	nC=0;
	for(int i=0;i<nA;i++)
	{
		if(A[i]>=0)
		{
			B[nB]=A[i];
			nB++;
		}
		else
		{
			C[nC]=A[i];
			nC++;
		}
	}
}
void xuat(int B[],int nB,int C[],int nC)
{	
	cout<<"B[]=";
	for(int i=0;i<nB;i++)
		cout<<B[i]<<" ";
	cout<<endl<<"C[]=";
	for(int i=0;i<nC;i++)
		cout<<C[i]<<" ";
}






