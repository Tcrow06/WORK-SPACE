#include<iostream>
using namespace std;
void nhap(int A[],int&n,float&x);
long double tinh(int A[],int n,float x);
int main()
{
	int n,A[100];
	float x;
	nhap(A,n,x);
	long double s=tinh(A,n,x);
	cout<<s;
	
}
void nhap(int A[],int&n,float&x)
{
	cout<<"nhap n,x:";
	cin>>n>>x;
	cout<<"nhap mang: ";
	for(int i=0;i<=n;i++)
		cin>>A[i];
}
long double tinh(int A[],int n,float x)
{
	long double s=A[0],x1=1;
	for(int i=1;i<=n;i++)
	{
		x1=x1*x;
		s=s+A[i]*x1;
	}
	return s;
}
