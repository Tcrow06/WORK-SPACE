#include<iostream>
using namespace std;
int gtriAm(float A[],int n,float x,float&y);
void nhap(float A[],int&n,float&x);
void xuat(int k,float y);
float A[1000];
int main()
{
	int n;
	float x,y;
	nhap(A,n,x);
	int k=gtriAm(A,n,x,y);
	xuat(k,y);
	return 0;
}
void nhap(float A[],int&n,float&x)
{
	cout<<"so luong phan tu mang n=";
	cin>>n;
	cout<<" nhap mang: ";
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"nhap x=";
	cin>>x;
}
void xuat(int k,float y)
{
	if(k==0)
		cout<<k;
	else
		cout<<y;
}
int gtriAm(float A[],int n,float x,float&y)
{
	for(int i=n-1;i>=0;i--)
		if(A[i]<0&&A[i]>x)
		{
			y=A[i];
			return 1;
		}
	return 0;
			
}
