#include<iostream>
using namespace std;
void nhap(float&n);
void xuat(int k);
float lamTron(float n);
int main()
{
	float n;
	nhap(n);
	int k=lamTron(n);
	xuat(k);
	return 0;
}
void nhap(float&n)
{
	cin>>n;
}
void xuat(int k)
{
	cout<<k;
}
float lamTron(float n)
{
	int t=n;
	float a=n-t;
	if(a>=0.5)
		return t+1;
	else 
		if(-0.5>a&&a>-1)
			return t-1;
	else
		return t;
}




