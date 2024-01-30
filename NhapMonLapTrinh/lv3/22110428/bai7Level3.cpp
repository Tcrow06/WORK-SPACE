#include<iostream>
using namespace std;
void nhap(int &n);
int tong(int n,int&k);
void xuat(int s,int k);
int main()
{
	int n,k;
	nhap(n);
	int s=tong(n,k);
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
		cout<<"nhap n khong hop le";
	else 
		cout<<"tong cac chu so cua n la: "<<s;
}
int tong(int n,int&k)
{
		
	if(n<=0)
		k=1;
	else
	{
		int t=0;
		while(n!=0)
		{
			t=t+n%10;
			n=n/10;
		}
		return t;	
	}
}





