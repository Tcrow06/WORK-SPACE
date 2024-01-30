#include<bits/stdc++.h>
using namespace std;
void sx(double A[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(A[i]>A[j])
			{
				double tam=A[i];
				A[i]=A[j];
				A[j]=tam;
			}
}
void tinh(double A[],int n)
{
	sx(A,n);
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	cout<<endl;
	int d=0;
	int l=0;
	for(int i=0;i<n;i++)
	{
		int vt=i;
		for(int j=i+1;j<n;j++)
			if(A[i]==A[j])
			{
				l++;
				vt=j;
			}
		i=vt;
	}
	cout<<n-l;
}
int main()
{
	int n;
	cin>>n;
	double A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	tinh(A,n);
	return 0;
}
