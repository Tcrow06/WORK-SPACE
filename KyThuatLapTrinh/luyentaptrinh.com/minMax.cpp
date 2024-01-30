#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void kiemTraXuat(int A[],int n)
{
	int max=0;
	int min=0;
	if(A[0]>A[1])
		max=A[0];
	if(A[0]<A[1])
		min=A[0];
	if(A[n-1]>A[n-2]&&max<A[n-1])
		max=A[n-1];
	if(A[n-1]<A[n-2]&&min>A[n-1])
		min=A[n-1];
	for(int i=1;i<n-1;i++)
	{
		if(A[i-1]<A[i]&&A[i]>A[i-1]&&max<A[i])
			max=A[i];
		if(A[i-1]>A[i]&&A[i]<A[i-1]&&min>A[i])
			min=A[i];
	}
	cout<<max<<" "<<min;
}
int main()
{
	int n;
	int A[100];
	nhap(A,n);
	kiemTraXuat(A,n);
	return 0;
}
