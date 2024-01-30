#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int timViTriMin(int A[],int n);
void xuat(int v);
int A[10000];
int main()
{
	int n;      
	nhap(A,n);
	int k=timViTriMin(A,n);
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
int timViTriMin(int A[],int n)
{
	int viTriMin=0;
	int	min=A[0];
	for(int i=1;i<n;i++)
		if(min>A[i])
		{
			min=A[i];
			viTriMin=i; 
		}		
	return viTriMin;
}
void xuat(int v)
{
	cout<<v;
}




