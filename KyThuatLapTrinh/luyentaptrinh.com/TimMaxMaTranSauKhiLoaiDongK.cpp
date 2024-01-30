#include<bits/stdc++.h>
using namespace std;
void nhap(long long A[][100],int m,int n);
void tim(long long A[][100],int m,int n,int k);
int main()
{
	int m,n,k;
	long long A[100][100];
	cin>>m>>n>>k;
	nhap(A,m,n);
	tim(A,m,n,k);
	return 0;
}
void nhap(long long A[][100],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
void tim(long long A[][100],int m,int n,int k)
{
	for(int j=0;j<n;j++)
		A[k][j]=0;
	int max=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(max<A[i][j])
				max=A[i][j];
	cout<<max;
}
