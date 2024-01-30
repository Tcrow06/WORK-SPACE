#include<iostream>
using namespace std;
void nhap(int&n)
{
	cout<<"nhap n: ";
	cin>>n;
}
long long tinh(int n)
{
	long long p=1,s=0;
	for(int i=1;i<=n;i++)
	{
		p=p*i;
		s=s+p;
	}
	return s;
}
void xuat(long long s)
{
	cout<<s;
}
int main()
{
	int n;
	long long s;
	nhap(n);
	s=tinh(n);
	xuat(s);
}

