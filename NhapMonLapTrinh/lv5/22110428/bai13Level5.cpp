#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n,float&x);
void xuat(float s,int k);
float tinhTong(int n,float x,int&k);
int giaiThua(int i);
float giaTri(int i,float x);
int main()
{
	int n,k;
	float x; 
	nhap(n,x);
	float s=tinhTong(n,x,k);
	xuat(s,k);
	return 0;
}
void nhap(int &n,float&x)
{
	cout<<"n=";
	cin>>n;
	cout<<"x=";
	cin>>x;                                 
}
void xuat(float s,int k)
{
	if(k==1)
		cout<<"khong the tinh tong";
	else
		cout<<"S="<<s;
}
float tinhTong(int n,float x,int&k)
{
	if(n<0)
		k=1;
	else
	{
		float s1=1;
		for(int i=1;i<=n;i++)
			s1=s1+giaTri(i,x);
		return s1;
	}
		
}
float giaTri(int i,float x)
{
	float s2=pow(x,i)/giaiThua(i);
	return s2;
}
int giaiThua(int j)
{
		int t=1;
		for(int i=1;i<=j;i++)
			t=t*i;
		return t;
}







