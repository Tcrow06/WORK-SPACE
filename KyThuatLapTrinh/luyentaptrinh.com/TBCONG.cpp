#include<bits/stdc++.h>
using namespace std;
void nhap(int A[][100],int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
bool chan(int x)
{
	if(x%2==0)
		return true;
	return false;
}
bool ktra(int i,int j,int n)
{
	if(i==0||j==0||i==j||i==n-1||j==n-1||j==n-1-i)
		return true;
	return false;
}
void tinh(int A[][100],int n)
{
	int d=0,s=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(ktra(i,j,n)&&chan(A[i][j]))
			{
				s+=A[i][j];
				d++;
			}
	float t=(float)s/d;
	if(d==0)
		cout<<0;
	else
		cout<<fixed<<setprecision(2)<<t;		
}


int main()
{
	int n;
	cin>>n;
	int A[100][100];
	nhap(A,n);
	tinh(A,n);
	return 0;
}
