#include<iostream>
#include<math.h>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int ktraSCP(int A[],int n);
bool scp(int i);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	int k=ktraSCP(A,n);
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
int ktraSCP(int A[],int n)
{
	for(int i=0;i<n;i++)
		if(scp(A[i])==false)
			return 0;
	return 1;
}
bool scp(int i)
{
	if(i<0)
		return false;
	else
	{
		float a=sqrt(i);
		if(a-(int)a==0)
			return true;
		else
			return false;
	}
		
		
		
		
		
		
}




