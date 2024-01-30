#include<iostream>
using namespace std;
void nhap(int A[],int B[],int&n);
void chenMang(int A[],int B[],int C[],int n,int&nC);
void xuat(int C[],int nC);
int A[1000],B[1000],C[2000];
int main()
{
	int n,nC;
	nhap(A,B,n);
	chenMang(A,B,C,n,nC);
	xuat(C,nC);
	return 0;
}
void nhap(int A[],int B[],int&n)
{
	cout<<"n=";
	cin>>n;
	cout<<"nhap mang A[]=";
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"nhap mang B[]=";
	for(int i=0;i<n;i++)
		cin>>B[i];
}
void chenMang(int A[],int B[],int C[],int n,int&nC)
{
	nC=2*n;
	int nA=0;
	int nB=0;
	for(int i=0;i<nC;i+=2)
	{
		C[i]=A[nA];
		C[i+1]=B[nB];
		nA++;
		nB++;
	}

}
void xuat(int C[],int nC)
{
	for(int i=0;i<nC;i++)
		cout<<C[i]<<" ";
}



