#include<iostream>
#include<string.h>
using namespace std;
void nhap(int A[],int&nA,int B[],int&nB);
void xuat(int d);
int demKhongLap(int A[],int nA,int B[],int nB);
int A[1000],B[1000];
int main()
{
	int nA,nB;
	nhap(A,nA,B,nB);
	int d=demKhongLap(A,nA,B,nB);
	xuat(d);
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
void xuat(int d)
{
	cout<<d;
}
int demKhongLap(int A[],int nA,int B[],int nB)
{
	bool k[100],e[100];
	memset(k,true,sizeof(k));
	memset(e,true,sizeof(e));
	int i,j;
	int dem=0;
	for( i=0;i<nA;i++)
	{
		for( j=0;j<nB;j++)
			if(A[i]==B[j])
			{
				k[i]=false;
				e[j]=false;
			}
		if(k[i])
			dem++;
	}
	for(j=0;j<nB;j++)
		if(e[j])
			dem++;
	return dem;
}

