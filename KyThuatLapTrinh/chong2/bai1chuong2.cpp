#include<iostream>
using namespace std;
void nhap(int A[],int&n,int&x);
int tim(int A[],int n,int x);
void xuat(int a);
int main()
{
	int n,A[100],x;
	nhap(A,n,x);
	int kq=tim(A,n,x);
	xuat(kq);
	return 0;
} 
void nhap(int A[],int&n,int&x)
{
	cout<<"nhap phan tu mang: ";
	cin>>n;
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"nhap gia tri can tim kiem: ";
	cin>>x;
}
int tim(int A[],int n,int x)
{
	A[n]=x;
	int i=0;
	while(A[i]!=x)
		i++;
	if(i<n)
		return 1;
	return 0;	
}
void xuat(int a)
{
	if(a==1)
		cout<<"co";
	else
		cout<<"khong";
}


