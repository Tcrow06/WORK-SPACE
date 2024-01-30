#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
int ktraSHH(int A[],int n);
void xuat(int k);
bool shh(int i);
int main()
{
	int A[100],n;      
	nhap(A,n);
	int k=ktraSHH(A,n);
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
void xuat(int k)
{
	if(k==1)
		cout<<"dung";
	else	
		cout<<"sai";
}
int ktraSHH(int A[],int n)
{
	for(int i=0;i<n;i++)
		if(shh(A[i])==false)
			return 0;
	return 1;	
}
bool shh(int i)
{
	int d=0;
	for(int j=1;j<i;j++)
		if(i%j==0)
			d+=j;
	if(d==i)
		return true;
	else
		return false;
}


