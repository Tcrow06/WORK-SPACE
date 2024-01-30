#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int n)
{
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void kt(int A[],int n)
{
	int k=-1;
	for(int i=1;i<n-1;i++)
		if((A[i-1]>A[i]&&A[i]>A[i+1])
			||(A[i-1]<A[i]&&A[i]<A[i+1]))
				{
					k=i;
					break;
				}
	cout<<k;
}
int main()
{
	int n;
	cin>>n;
	int A[n];
	nhap(A,n);
	kt(A,n);
	return 0;
}
