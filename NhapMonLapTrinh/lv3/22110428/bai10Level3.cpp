#include<iostream>
using namespace std;
void nhap(int&a,int&b,int&n);
void xuat(int t,int k);
int tinhTong(int a,int b,int n,int&k);
int main()
{
	int a,b,n,k;
	nhap(a,b,n);
	int t=tinhTong(a,b,n,k);
	xuat(t,k);
	return 0;
}
void nhap(int&a,int&b,int&n)
{
	cout<<"nhap ba so a,b,n"<<endl;
	cin>>a>>b>>n;
}
void xuat(int t,int k)
{
	if(k==1)
		cout<<"khong hop le";
	else 
		cout<<t;
}
int tinhTong(int a,int b,int n,int&k)
{
	if(a>=n||b>=n)
		k=1;
	else
	{	
		int t=0;
		for(int i=1;i<=n;i++)
		{
			if(i%a==0&&i%b!=0)
				t=t+i;
		}
		return t;
	}
}














