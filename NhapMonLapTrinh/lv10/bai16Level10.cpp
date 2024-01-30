#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
int soChan(int A[][50],int m,int n);
void xuat(int t);
int main()
{
	int m,n;
	int A[50][50];
	nhap(A,m,n);
	int t=soChan(A,m,n);
	xuat(t);
	return 0;
}
int soChan(int A[][50],int m,int n)
{
	int dem=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(A[i][j]%2==0)
				dem++;
	return dem;
}
void xuat(int t)
{
	cout<<t;
}
void nhap(int A[][50],int&m,int&n)
{
	cout<<"nhap dong: ";
	cin>>m;
	cout<<"nhap cot: ";
	cin>>n;
	cout<<"nhap ma tran:"<<endl;;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
