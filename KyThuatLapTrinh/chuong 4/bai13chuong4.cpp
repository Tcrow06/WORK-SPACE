#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,A[100];
int X[100]={0};
void xuat(){
	for(int i=0;i<n;i++)
		cout<<A[i];
	cout<<endl;
}
void trry(int i);
int main()
{
	cin>>n;
	memset(X,0,n+1);
	trry(0);
}
void trry(int i)
{
	if(i==n)
		xuat();
	for(int j=0;j<n;j++)
	{
		if(X[j]==0)
		{
			X[j]=1;
			A[i]=j;
			trry(i+1);	
			X[j]=0;
		}
	}
}
