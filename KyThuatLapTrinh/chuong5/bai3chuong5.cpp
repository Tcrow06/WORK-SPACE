#include<bits/stdc++.h>
using namespace std;
int tim(int A[],int n);
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int main()
{
	int n,A[n];
	nhap(A,n);
	int t=tim(A,n);
	cout<<t;
}
int tim(int A[],int n)
{
	int B[100];
	int nb=0;
	int maxC=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2!=0)
			B[nb++]=A[i];
		else
			if(A[i]>maxC)
				maxC=A[i];
	}
	sort(B,B+nb);
	for(int i=0;i<nb;i++)
		if(maxC<B[i])
			return B[i];
}






