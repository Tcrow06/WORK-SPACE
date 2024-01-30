#include<iostream>
using namespace std;
void nhap(int &n);
int tinhTich(int n,int&k);
void xuat(int s,int k);
int main()
{
	int n,k;
	nhap(n);
	int s=tinhTich(n,k);
	xuat(s,k);
	return 0;
}
void nhap(int &n)
{
	cout<<"nhap n=";
	cin>>n;                                         
}
void xuat(int s,int k)
{
	if(k==1)
		cout<<"khong the tinh tong";
	else
		cout<<"s=1*2*...*n=n!="<<s;
}
int tinhTich(int n,int&k)
{
	if(n<=0)
		k=1;
	else
	{
		int t=1;
		for(int i=1;i<=n;i++)
			t=t*i;
		return t;
	}
}






