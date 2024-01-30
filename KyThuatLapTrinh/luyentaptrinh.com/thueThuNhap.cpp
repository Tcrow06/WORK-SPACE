#include<bits/stdc++.h>
using namespace std;
void nhap(long long &n);
void xuat(long long t);
long long tinhThue(long long n);
int main()
{
	long long n;
	nhap(n);
	long long t= tinhThue(n);
	xuat(t);
	return 0;
}
void nhap(long long &n)
{
	cin>>n;
}
void xuat(long long t)
{
	cout<<t;
}
long long tinhThue(long long n)
{
	long long l,l1,l2,l3,l4,l5,l6,n1,n2,n3,n4,n5,n6;
	l1=5000000;
	l2=10000000;
	l3=18000000;
	l4=32000000;
	l5=52000000;
	l6=80000000;
	if(n=0)
		l=0;
	else
	{
		n1=n-l1;
		if(n1>0)
		{
			l=l1*5/100;
			n2=n1-l1;
			if(n2>0)
			{
				l+=(l2-l1)*10/100;
				n3=n-l2;
				
			}
			else
				l+=n1*10/100;
			
			
		}
		else
			l=n*5/100;
	}
	
}
