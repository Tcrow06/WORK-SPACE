#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void lietKe(int A[],int n);
int main()
{
	int A[10000],n;      
	nhap(A,n);
	lietKe(A,n);
	return 0;
} 
void nhap(int A[],int&n)
{	
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void lietKe(int A[],int n)
{
	int a=A[0];
	while(a>=10)
	{
		a/=10;
	}
	if(a%2==0)
	{
		for(int i=0;i<n;i++)
			cout<<A[i]<<" ";
	}
	else
		cout<<"khong the xuat gia tri mang";
}
