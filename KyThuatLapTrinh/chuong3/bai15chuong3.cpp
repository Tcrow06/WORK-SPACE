#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
long long tinhGiaiThua(int n);
int dem0(long long s);

int main()
{
	int n;
	cin>>n;
	long long s=tinhGiaiThua(n);
	int dem=dem0(s);
	cout<<dem;
}
long long tinhGiaiThua(int n)
{
	long long s=1;
	for(int i=1;i<=n;i++)
		s=s*i;
	return s;
}
int dem0(long long s)
{
	char A[100];
	itoa(s,A,10);
	
	strrev(A);

	int dem=0;
	int i=0;
	while(A[i]=='0')
	{
		dem++;
		i++;
	}
	return dem;
}
