#include<bits/stdc++.h>
using namespace std;
void nhap(long long A[][100],int m,int n);
void timD(long long A[][100],int m,int n,long long B[]);
void tim(long long B[],int m);
int main()
{
	int m,n;
	long long A[100][100],B[100];
	cin>>m>>n;
	nhap(A,m,n);
	timD(A,m,n,B);
	tim(B,m);
	return 0;
}
void nhap(long long A[][100],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
void timD(long long A[][100],int m,int n,long long B[])
{
	long long d=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(d<A[i][j])
				d=A[i][j];
		}
		B[i]=d;
		d=0;
	}
//	for(int i=0;i<m;i++)
//		cout<<B[i]<<" ";
//		cout<<endl;
}
void tim(long long B[],int m)
{
	long long d=100000;
	for(int i=0;i<m;i++)
		if(d>B[i])
			d=B[i];
	cout<<d;	
}


