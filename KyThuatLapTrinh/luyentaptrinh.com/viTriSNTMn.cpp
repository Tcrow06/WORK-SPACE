#include<bits/stdc++.h>
using namespace std;
int A[100];
void nhap(int A[100],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int d)
{
	cout<<d;
}
bool snt(int n)
{
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
int timVitri(int A[],int n)
{
	int m=10000;
	int v=-1;
	for(int i=0;i<n;i++)
		if(snt(A[i])&&A[i]<m)
		{
			v=i;
			m=A[i];
		}
	return v;
}
int main()
{
	int n;
	nhap(A,n);
	int d=timVitri(A,n);
	xuat(d);
}
