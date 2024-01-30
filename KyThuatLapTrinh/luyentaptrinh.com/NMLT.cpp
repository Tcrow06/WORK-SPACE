#include<bits/stdc++.h>
using namespace std;
void xuat(int d)
{
	cout<<d;
}
void nhap(long long A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int kiemTra(long long A[],int n)
{
	int d=-1;
	for(int i=1;i<n;i++)
		if(A[i-1]>=A[i])
		{
			d=i;
			break;
		}
	return d;
}
int main()
{
	int n;
	long long A[200];
	nhap(A,n);
	int d=kiemTra(A,n);
	xuat(d);
	return 0;
}
