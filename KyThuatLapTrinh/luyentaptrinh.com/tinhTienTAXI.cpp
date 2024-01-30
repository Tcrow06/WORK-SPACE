#include<bits/stdc++.h>
using namespace std;
void nhap(float&n);
void xuat(long long t);
long long tinhTien(float n);
int main()
{
	float n;
	nhap(n);
	long long t=tinhTien(n);
	xuat(t);
	return 0;
}
void nhap(float&n)
{
	cin>>n;
}
void xuat(long long t)
{
	cout<<t;
}
long long tinhTien(float n)
{
    int n1;
	long long t=0;
	if(n>0)
		t=12500;
	n=n-0.7;
	if(n-int(n)>0)
		n1=(int)n+1;
    else
        n1=n;
	if(n1<=30)
		t=t+n1*17000;
	else 
		t=t+30*17000+(n1-30)*14000;
	return t;			
}







