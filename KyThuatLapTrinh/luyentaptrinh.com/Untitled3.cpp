#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void tinh(int a[],int b[],int n)
{
	int c[100];
	int min=b[0]/a[0];
	for(int i=11;i<n;i++)
	{
		int t=b[i]/a[i];
        if(min>t)
            min=t;
	}
	cout<<min;
}
int main()
{
	int n;
	cin>>n;
	int a[n+5],b[n+5];
	nhap(a,n);
	nhap(b,n);
	tinh(a,b,n);
	return 0;
}
