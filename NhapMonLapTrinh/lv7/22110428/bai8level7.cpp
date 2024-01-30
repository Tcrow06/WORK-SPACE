#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
void xuat(float k);
float tbcSNT(int A[],int n);
bool snt(int i);
int main()
{
	int A[10000],n;      
	nhap(A,n);
	float k=tbcSNT(A,n);
	xuat(k);
	return 0;
} 
void nhap(int A[],int&n)
{	
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
float tbcSNT(int A[],int n)
{
	int s=0;
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(snt(A[i]))
		{
			s+=A[i];
			d++;
		}
	}
	float tbc=(float)s/d;
	return tbc;
}
void xuat(float k)
{
	cout<<k;
}	
bool snt(int i)
{                 
	if(i<=1)              
		return false;
	else         
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				return false;
		}
		return true;
	}
}

