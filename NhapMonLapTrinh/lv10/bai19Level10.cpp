#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
void xuat(int t);
int kiemTra(int A[][50],int m,int n);
int main()
{
	int m,n;
	int A[50][50];
	nhap(A,m,n);
	int t=kiemTra(A,m,n);
	xuat(t);
	return 0;
}
void nhap(int A[][50],int&m,int&n)
{
	cout<<"so dong: ";
	cin>>m;
	cout<<"so cot: ";
	cin>>n;
	cout<<"nhap ma tran: "<<endl;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];	
}
void xuat(int t)
{
	if(t==1)
		cout<<"dung";
	else
		cout<<"sai";
}
int kiemTra(int A[][50],int m,int n)
{
	int k;
	cout<<"nhap dong thu k de kiem tra "<<endl<<"k=";
	cin>>k;
	for(int i=0;i<n-1;i++)
		if(A[k][i]>A[k][i+1])
			return 0;
	return 1;
}
