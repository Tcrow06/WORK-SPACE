#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void dem(int A[],int n)
{
	vector<int>L(n,1);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
			if(A[i]>=A[j])
			L[i]=max(L[i],L[j]+1);
	}
	cout<<*max_element(L.begin(),L.end())<<endl;
}
int main()
{
	int n,A[100];
	nhap(A,n);
	dem(A,n);
}
