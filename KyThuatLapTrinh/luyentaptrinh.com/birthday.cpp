#include<bits/stdc++.h>
using namespace std;
void nhap(long long a[],long long b[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
}
int tinh(long long a[],long long b[],int n)
{
	long long min=pow(10,4);
	for(int i=0;i<n;i++)
	{
		if(min<b[i]/a[i])
            min=b[i]/a[i];
	}
	return min;
}
void xuat(int d)
{
	cout<<d;
}
int main()
{
	int n;
	long long a[100],b[100];
	nhap(a,b,n);
	int d=tinh(a,b,n);
	xuat(d);
	return 0;
}
