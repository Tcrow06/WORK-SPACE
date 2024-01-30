#include<iostream>
using namespace std;
void nhap(float A[],int&n);
void xuat(float a,float b);
void timDoan(float A[],int n,float&a,float&b);
float A[10000];
int main()
{
	int n;
	float a,b;
	nhap(A,n);
	timDoan(A,n,a,b);
	xuat(a,b);
	return 0;
}
void nhap(float A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(float a,float b)
{
	cout<<"["<<a<<","<<b<<"]";
}
void timDoan(float A[],int n,float&a,float&b)
{
	a=A[0];
	for(int i=0;i<n;i++)
		if(A[i]<a)
			a=A[i];
	b=A[0];
	for(int i=0;i<n;i++)
		if(A[i]>b)
			b=A[i];



	
}

