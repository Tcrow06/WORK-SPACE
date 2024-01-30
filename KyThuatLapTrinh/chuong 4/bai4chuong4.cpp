#include<iostream>
using namespace std;
void nhap(int&n,int&x);
int timNhiPhan(int n,int x,int left,int right);
int A[100];
int main() 
{
	int n,x;
	nhap(n,x);
	int left=0,right =n-1;
	int max=timNhiPhan(n,x,left,right);
	if(max==1)
		cout<<"co";
	else
		cout<<"khong";
}
void nhap(int&n,int&x)
{
	cout<<"nhap n,x: ";
	cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int timNhiPhan(int n,int x,int left,int right)
{
	int mid=(left+right)/2;
	if(left>right)
		return 0;
	if(A[mid]==x)
		return 1;
	else
		if(A[mid]>x)
			return timNhiPhan(n,x,left,mid-1);
	else
		return timNhiPhan(n,x,mid+1,right);
}
