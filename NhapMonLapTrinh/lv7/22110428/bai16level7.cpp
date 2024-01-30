#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
int ktraSNTandSHH(int A[],int n);
int A[10000];
void xuat(int k);
bool snt(int i);
bool shh(int i);
int main()
{
	int n;      
	nhap(A,n);
	int k=ktraSNTandSHH(A,n);
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
		cout<<"bang nhau";
	else	
		cout<<"khong bang nhau";
}
int ktraSNTandSHH(int A[],int n)
{
	int d1=0;
	int d2=0;
	for(int i=0;i<n;i++)
	{
		if(snt(A[i]))
			d1++;
		if(shh(A[i]))
			d2++;
	}
	if(d1==d2)
		return 1;
	else
		return 0;
	
}
bool snt(int i)
{
	if(i<=1)
		return false;
	else
	{
		for(int j=2;j<=sqrt(i);j++)
			if(i%j==0)
				return false;
		return true;		
	}
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



