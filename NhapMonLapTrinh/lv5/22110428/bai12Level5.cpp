#include<iostream>
using namespace std;
void nhap(int &n);
void xuat(float s,int k);
float tinhTong(int n,int&k);
float bieuThuc(int x);
int giaiThua(int x1);
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
	cin>>n;                                         
}
void xuat(float s,int k)
{
	if(k==1)
		cout<<"khong the tinh tong";
	else
		cout<<"S(n)="<<s;
}
float tinhTong(int n,int&k)
{
	if(n<=0)
		k=1;
	else
	{
		float s1=0;
		for(int i=1;i<=n;i++)
		{
			s1=s1+bieuThuc(i);
		}
		return s1;		
	}
}
float bieuThuc(int x)
{
	int s=0;
	float s1;
	for(int i=1;i<=x;i++)
	{
		s=s+i;
	}
	s1=(float)s/giaiThua(x);
	return s1;
}
int giaiThua(int x1)
{
	int t=1;
	for(int i=1;i<=x1;i++)
		t=t*i;
	return t;
}
