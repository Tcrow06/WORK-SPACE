#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&n,float&x);
void xuat(float s);
float tinh(int n,float x);
int main()                          
{
	int n;                         
	float x,s;                                
	nhap(n,x);
	s=tinh(n,x);
	xuat(s);
	return 0;
}
void nhap(int&n,float&x)
{
	cout<<"nhap n va x:"<<endl;
	cin>>n>>x;
}
void xuat(float s)
{
	cout<<"S="<<s;
}
float tinh(int n,float x)
{
	float s=0;
	for(int i=1;i<=n;i++)
		s=sqrt(x+s);
	return s;
}









