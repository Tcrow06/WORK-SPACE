#include<iostream>
#include<string.h>
using namespace std;
void nhap(string&n);
void xuat(string n);
int main()
{
	string n;
	nhap(n);
	xuat(n);
	return 0;
}
void nhap(string&n)
{
	cin>>n;
}
void xuat(string n)
{
	for(int i=n.length();i>=0;i--)
	{
		cout<<n[i-1];
	}
}
