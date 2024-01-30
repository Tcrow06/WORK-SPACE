#include<bits/stdc++.h>
using namespace std;
bool laHH(int x)
{
	int s=0;
	for(int i=1;i<x;i++)
		if(x%i==0)
			s+=i;
	if(s==x)
		return true;
	else
		return false;
}
void tinh(int A[],int n,int x)
{
	int d=0;
	for(int i=0;i<n;i++)
		if(laHH(A[i])&&d<A[i]&&A[i]<x)
			d=A[i];
	cout<<d;
}

int main()
{
	int n,A[100],x;
	cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>A[i];
	tinh(A,n,x);
	return 0;
}
