#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
int demSYN(int A[][50],int m,int n);
bool soYenNgua(int A[][50],int m,int n,int x,int y);
bool minCot(int A[][50],int m,int n,int x,int y);
bool maxDong(int A[][50],int m,int n,int x,int y);
void nhap(int A[][50],int&m,int&n);
void xuat(int d)
{
	cout<<d;
}
int main()
{
	int m,n;
	int A[50][50];
	nhap(A,m,n);
	int d=demSYN(A,m,n);
	xuat(d);
	return 0;
}
void nhap(int A[][50],int&m,int&n)
{
	cout<<"so dong: ";
	cin>>m;
	cout<<"so cot: ";
	cin>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];	
}
bool maxDong(int A[][50],int m,int n,int x,int y)
{
	for(int i=0;i<n;i++)
		if(A[x][i]>A[x][y])
			return false;
	return true;
}
bool minCot(int A[][50],int m,int n,int x,int y)
{
	for(int i=0;i<m;i++)
		if(A[i][y]<A[x][y])
			return false;
	return true;
}
bool soYenNgua(int A[][50],int m,int n,int x,int y)
{
	if(maxDong(A,m,n,x,y)&&minCot(A,m,n,x,y))
		return true;
	else
		return false;
}
int demSYN(int A[][50],int m,int n)
{
	int dem=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(soYenNgua(A,m,n,i,j))
				dem++;
	return dem;
}









