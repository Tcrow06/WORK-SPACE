#include<iostream>
using namespace std;
float soAmMax(float A[],float n);
void nhap(float A[],float&n);
void xuat(float t);
float A[10000];
int main()
{
	float n;
	nhap(A,n);
	float t=soAmMax(A,n);
	xuat(t);
	return 0;
} 
void nhap(float A[],float&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(float t)
{
	cout<<t;
}
float soAmMax(float A[],float n)
{	
	float t=0;
	int x;
	for(int i=0;i<n;i++)
		if(A[i]<0)
		{
			t=A[i];
			x=i;
			break;
		}
	for(int i=x+1;i<n;i++)
		if(A[i]<0&&A[i]>t)
			t=A[i];
	return t;
}
