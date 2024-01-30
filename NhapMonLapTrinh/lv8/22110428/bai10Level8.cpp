#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int soHoanThienMin(int A[],int n);
bool sht(int i);
int main()
{
	int A[10000],n;      
	nhap(A,n);
	int k=soHoanThienMin(A,n);
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
int soHoanThienMin(int A[],int n)
{
	int t=0;
	int x;
	for(int i=0;i<n;i++)
		if(sht(A[i]))
		{
			t=A[i];
			x=i;
			break;
		}
	for(int i=x+1;i<n;i++)
		if(sht(A[i])&&A[i]<t)
			t=A[i];
	return t;	
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

