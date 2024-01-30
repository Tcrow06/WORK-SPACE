#include<iostream>
using namespace std;
void nhap(int A[],int&nA,int B[],int&nB);
void chenMang(int A[],int nA,int B[],int nB,int C[],int&nC);
void xuat(int C[],int nC);
int min(int a,int b);
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
void xuat(int C[],int nC)
{
	for(int i=0;i<nC;i++)
		cout<<C[i]<<" ";
}
void chenMang(int A[],int nA,int B[],int nB,int C[],int&nC)
{
	int na=0;
	int nb=0; 
	int k=min(nA,nB);
	for(int i=0;i<2*k;i++)
	{
		if(A[na]<=B[nb])
			{
					C[i]=A[na];
					if(na<k-1)
						na++;
			}
		else if(A[na]>=B[nb])
			{	
					C[i]=B[nb];
					if(nb<k-1)
						nb++;		
			}		
	}
	nC=2*k;
	if(nA>nB)
	{
		for(int i=nB;i<nA;i++)
		{
			C[nC]=A[i];
			nC++;
		}
	}
	else
	{
		for(int i=nA;i<nB;i++)
		{
			C[nC]=B[i];
			nC++;
		}
	}
}
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}





