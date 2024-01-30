#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&a,int&b);
void xuat(int e,int f);
void phanSoToiGian(int a,int b,int c,int d,int&e,int&f);
int ucln(int s1,int s2);
int main()
{
	int a,b,c,d,e,f;
	nhap(a,b);
	nhap(c,d);
	phanSoToiGian(a,b,c,d,e,f);
	xuat(e,f);
	return 0;
}
void nhap(int&a,int&b)
{	
	cout<<"nhap phan so :"<<endl;
	cin>>a>>b;
}
void xuat(int e,int f)
{
	cout<<"phan so toi gian la :"<<endl;
	cout<<e<<"/"<<f;
}
void phanSoToiGian(int a,int b,int c,int d,int&e,int&f)
{
	int s1=a*d+b*c;
	int s2=b*d; 
	int i=ucln(s1,s2);
	e=s1/i;
	f=s2/i;
}
int ucln(int s1,int s2)
{
	int uc;
	for(int i=1;i<=s1&&i<=s2;i++)
	{
		if(s1%i==0&&s2%i==0)
			uc=i;
	}
	return uc;
}
