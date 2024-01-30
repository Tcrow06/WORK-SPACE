#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
int demSHoangHau(int A[][50],int m,int n);
bool kiemTraSHoangHau(int A[][50],int m,int n,int x,int y);
bool maxXuongPhai(int A[][50],int m,int n,int x,int y);
bool maxXuongTrai(int A[][50],int m,int n,int x,int y);
bool maxLenPhai(int A[][50],int m,int n,int x,int y);
bool maxLenTrai(int A[][50],int m,int n,int x,int y);
bool maxCot(int A[][50],int m,int n,int x,int y);
bool maxDong(int A[][50],int m,int n,int x,int y);
void xuat(int d)
{
	cout<<d;
}
int main()
{
	int A[50][50];
	int m,n;
	nhap(A,m,n);
	int d=demSHoangHau(A,m,n);
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
bool maxCot(int A[][50],int m,int n,int x,int y)
{
	for(int i=0;i<m;i++)
		if(A[i][y]>A[x][y])
			return false;
	return true;
}
bool maxLenTrai(int A[][50],int m,int n,int x,int y)
{
	int i=x-1;
	int j=y-1;
	while(i>=0&&j>=0)
	{
		if(A[x][y]<A[i][j])
			return false;
		else
			i--;
			j--;
	}
}
bool maxLenPhai(int A[][50],int m,int n,int x,int y)
{
	int i=x-1;
	int j=y+1;
	while(i>=0&&j<n)
	{
		if(A[x][y]<A[i][j])
			return false;
		else
			i--;
			j++;
	}
}
bool maxXuongTrai(int A[][50],int m,int n,int x,int y)
{
	int i=x+1;
	int j=y-1;
	while(i<m&&j>=0)
	{
		if(A[x][y]<A[i][j])
			return false;
		else
			i++;
			j--;
	}
}
bool maxXuongPhai(int A[][50],int m,int n,int x,int y)
{
	int i=x+1;
	int j=y+1;
	while(i<m&&j>=0)
	{
		if(A[x][y]<A[i][j])
			return false;
		else
			i++;
			j++;
	}
}
bool kiemTraSHoangHau(int A[][50],int m,int n,int x,int y)
{
	if(maxDong(A,m,n,x,y)&&maxCot(A,m,n,x,y)&&maxLenTrai(A,m,n,x,y)&&maxLenPhai(A,m,n,x,y)
	&&maxXuongPhai(A,m,n,x,y)&&maxXuongTrai(A,m,n,x,y))
		return true;
	else
		return false;
}
int demSHoangHau(int A[][50],int m,int n)
{
	int dem=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(kiemTraSHoangHau(A,m,n,i,j))
				dem++;
	return dem;
}

























