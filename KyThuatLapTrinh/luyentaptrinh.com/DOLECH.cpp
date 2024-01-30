#include<bits/stdc++.h>
using namespace std;
void nhap(long long A[],int n)
{
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void tinh(long long A[],int n)
{
	long long d=INT_MAX;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++) 
		if((A[j]-A[i])<d)
			d=A[j]-A[i];	
	cout<<d;		
}
int main()
{
	int n;
	cin>>n;
	long long A[n];
	nhap(A,n);
	tinh(A,n);
	return 0;
	 
}
