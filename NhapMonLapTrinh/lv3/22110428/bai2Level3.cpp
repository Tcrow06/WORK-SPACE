#include<iostream>
using namespace std;
void nhap(int &n);
int tinhTong(int n,int&k);
void xuat(int s,int k);
int main()
{
	int n,k;
	nhap(n);
	int s=tinhTong(n,k);
	xuat(s,k);
	return 0;
}
void nhap(int&n)
{
	cout<<"nhap n=";
	cin>>n;
}          
void xuat(int s,int k)         
{   
	if(k==1)
		cout<<"khong the tinh tong";
	else                                                     
		cout<<"s=1^2+2^2+...+n^2="<<s;
}
int tinhTong(int n,int&k)
{
	if(n<=0)
		k=1;
	else 
	{
		int t=0;
		for(int i=1;i<=n;i++)
			t=t+i*i;
		return t;
	}
	
}



