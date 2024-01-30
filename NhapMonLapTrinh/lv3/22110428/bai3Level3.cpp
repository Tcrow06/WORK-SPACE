#include<iostream>
using namespace std;
void nhap(int &n);
float tinhTong(int n,int&k) ;
void xuat(float s,int k);
int main()
{
	int n,k;
	nhap(n);
	float s=tinhTong(n,k);
	xuat(s,k);
	return 0;
}
void nhap(int &n)
{
	cout<<"nhap n=";
	cin>>n;
}                       
void xuat(float s,int k)
{
	if(k==1)
		cout<<"khong the tinh tong";
	else
		cout<<"tong s=1+1/2+...+1/n= "<<s;       
}
float tinhTong(int n,int&k)              
{       
	if(n<=0)
		k=1;
	else 
	{
		float t=0;
		for(int i=1;i<=n;i++)
			t=t+(float)1/i;
		return t;
	}
						
}





