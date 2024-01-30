#include<iostream>
using namespace std;
void nhap(int&x,int&p);
long long tich(int x,int p);
void xuat(long long s);
int main()
{
	long long s;
	int x,p;
	nhap(x,p);
	s=tich(x,p);
	xuat(s);
	return 0;
}
void xuat(long long s)
{
	cout<<"x^p="<<s;
}
void nhap(int&x,int&p)
{
	cout<<"nhap x,p: ";
	cin>>x>>p;
}
long long tich(int x,int p)
{		
	if(p==1)
		return x;
	else
	{
		p--;
		return x*tich(x,p);
	}
}
