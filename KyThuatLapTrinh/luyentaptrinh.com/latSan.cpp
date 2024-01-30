#include<iostream>
using namespace std;
void nhap(int&m,int&n,int&a);
void xuat(int so);
int tinh(int m,int n,int a);
int main()
{
	int m,n,a;
	nhap(m,n,a);
	int so=tinh(m,n,a);
	xuat(so);
	return 0;
}
void nhap(int&m,int&n,int&a)
{
	cin>>m>>n>>a;
}
void xuat(int so)
{
	cout<<so;
}
int tinh(int m,int n,int a)
{
	int t=m*n/(a*a);
	if(m*n%(a*a)!=0)
		t++;
	return t;
	
}
