#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xuat(int u);
int UCLN(int A[],int n);
bool uc(int A[],int n,int min);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	int u=UCLN(A,n);
	xuat(u);
	return 0;
} 
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int u)
{
	cout<<u;
}
int UCLN(int A[],int n)
{
	int min=A[0];
	for(int i=1;i<n;i++)
		if(A[i]<min)
			min=A[i];
	for(min;;min--)
		if(uc(A,n,min))
			return min;	
}
bool uc(int A[],int n,int min)
{
	for(int i=0;i<n;i++)
		if(A[i]%min!=0)
			return false;
	return true;
}






