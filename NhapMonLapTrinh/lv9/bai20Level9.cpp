#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&nA,int B[],int&nB);
void chenMang(int A[],int nA,int B[],int nB,int C[],int&nC);
void xuat(int C[],int nC);
int min(int x,int y);
int A[1000],B[1000],C[2000];
int main()
{
	int nA,nB,nC;
	nhap(A,nA,B,nB);
	chenMang(A,nA,B,nB,C,nC);
	xuat(C,nC);
	return 0;
}
void nhap(int A[],int&nA,int B[],int&nB)
{
	cout<<"nA=";
	cin>>nA;
	cout<<"nhap mang A[]=";
	for(int i=0;i<nA;i++)
		cin>>A[i];
	cout<<"nB=";
	cin>>nB;
	cout<<"nhap mang B[]=";
	for(int i=0;i<nB;i++)
		cin>>B[i];
}
void chenMang(int A[],int nA,int B[],int nB,int C[],int&nC)
{
	
	int x=0;
	int y=0;
	nC=2*min(nA,nB);
	for(int i=0;i<nC;i+=2)
	{
		C[i]=A[x];
		C[i+1]=B[y];
		x++;
		y++;
	}
	int k=abs(nA-nB);
	if (nA>nB)
		for(int i=0;i<k;i++)
			C[nC++]=A[nB++];
	else
		for(int i=0;i<k;i++)
			C[nC++]=B[nA++];
}
int min(int x,int y)
{
	if(x>y)
		return y;
	else
		return x;
}

void xuat(int C[],int nC)
{
	for(int i=0;i<nC;i++)
		cout<<C[i]<<" ";
}
