#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
void sapXep(int A[][50],int m,int n);
void xuat(int A[][50],int m,int n);
int main()
{
	int m,n;
	int A[50][50];
	nhap(A,m,n);
	sapXep(A,m,n);
	xuat(A,m,n);
	return 0;
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
void xuat(int A[][50],int m,int n)
{
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
void sapXep(int A[][50],int m,int n)
{
	for(int i=0;i<n-1;i++)
		if(A[i][i]>A[i+1][i+1])
		{
			int t=A[i][i];
			A[i][i]=A[i+1][i+1];
			A[i+1][i+1]=t;
		}
}
