#include<bits/stdc++.h>
using namespace std;
void vtYN(int A[][100],int m,int n);
void demYN(int A[][100],int m,int n);
void nhap(int A[][100],int m,int n);
bool minC(int A[][100],int m,int n,int x,int y);
bool maxH(int A[][100],int m,int n,int x,int y);
bool laYN(int A[][100],int m,int n,int x,int y);
int main()
{
	int m,n,A[100][100];
	cin>>m>>n;
	nhap(A,m,n);
	demYN(A,m,n);
	vtYN(A,m,n);
	return 0;
}
void nhap(int A[][100],int m,int n)
{
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>A[i][j];
}
void demYN(int A[][100],int m,int n)
{
	int dem=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(laYN(A,m,n,i,j))
				dem++;
	cout<<dem<<endl;
}
void vtYN(int A[][100],int m,int n)
{
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(laYN(A,m,n,i,j))
				cout<<i<<" "<<j<<"  ";
}
bool laYN(int A[][100],int m,int n,int x,int y)
{
	if(maxH(A,m,n,x,y)&&minC(A,m,n,x,y))
		return true;
	return false;
}
bool maxH(int A[][100],int m,int n,int x,int y)
{
	for(int j=1;j<=n;j++)
		if(A[x][j]>A[x][y])
			return false;
	return true;
}
bool minC(int A[][100],int m,int n,int x,int y)
{
	for(int i=1;i<=m;i++)
		if(A[x][y]>A[i][y])
			return false;
	return true;
}



