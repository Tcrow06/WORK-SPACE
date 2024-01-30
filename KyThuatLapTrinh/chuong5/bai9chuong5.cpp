#include<bits/stdc++.h>
using namespace std;
int C[100][100]={0},D[100][100]={0};

void nhap(int A[][100],int&m,int&n)
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		A[i][n]=INT_MIN;
	for(int j=0;j<n;j++)
		A[m][j]=INT_MAX; 
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
			if(A[i][j]>A[i][n])
				A[i][n]=A[i][j];//ss dong
			if(A[i][j]<A[m][j])
				A[m][j]=A[i][j];//ss cot
		}
}
void tinh(int A[][100],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(A[i][j]==A[i][n]&&A[i][j]==A[m][j])
				cout<<A[i][j]<<" ";
		}
		cout<<"\n \n"; 
	for(int i=0;i<m;i++)
		 cout<<A[i][n]<<" ";
		cout<<endl;
	for(int i=0;i<n;i++)
		cout<<A[m][i]<<" ";
		cout<<endl;
		
}
int main()
{
	int A[100][100];
	int m,n;
	nhap(A,m,n);
	tinh(A,m,n);
}
