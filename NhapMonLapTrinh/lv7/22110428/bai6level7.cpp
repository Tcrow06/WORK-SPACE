#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int demSHT(int A[],int n);
bool sht(int i);
int main()
{
	int A[10000],n;      
	nhap(A,n);
	int k=demSHT(A,n);
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
int demSHT(int A[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(sht(A[i]))
			dem++;
	}
	return dem;
}
void xuat(int k)
{
	cout<<k;
}	
bool sht(int i)
{                 
    int s=0; 
	for(int j=1;j<i;j++)
	{
		if(i%j==0)
		s+=j;			
	}
	if(s==i)
		return true;
	else
		return false;
}

