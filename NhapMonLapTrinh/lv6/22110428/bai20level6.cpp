#include<iostream>
using namespace std;
void nhap(int A[],int&n,int&x,int&y);
void ktra(int A[],int n,int x,int y);
void xuat(int i);
int main()
{
	int A[10000],n,x,y;
	nhap(A,n,x,y);
	ktra(A,n,x,y);
	return 0;
} 
void nhap(int A[],int&n,int&x,int&y)
{	
	cout<<"so phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"nhap [x,y]=";
	cin>>x>>y;
}
void ktra(int A[],int n,int x,int y)
{
	for(int i=0;i<n;i++)
	{
		if(x<=A[i]&&A[i]<=y&&A[i]%2==0)
			xuat(A[i]);
	} 
}
void xuat(int i)
{
	cout<<i<<" ";
}
