#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int timKiem(int A[],int n);
void xuat(int t);
int main()
{
	int n,A[100];
	nhap(A,n);
	int t=timKiem(A,n);
	xuat(t);
	return 0;
}
void xuat(int t)
{
	cout<<"vi tri can tim: ";
	cout<<t;
}
int timKiem(int A[],int n)
{
	int so;
	cout<<"nhap so can tim kiem: ";
	cin>>so;
	int mid,left=0,right=n-1;
	do
	{
		mid=(left+right)/2;
		if(A[mid]==so)
			return mid;
		else 
			if(A[mid]>so)
				right=mid-1;
		else
			left=mid+1;		
	}while(left<=right);
}
void nhap(int A[],int&n)
{
	cout<<"nhap so phan tu mang: ";
	cin>>n;
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++)
		cin>>A[i];	
}
