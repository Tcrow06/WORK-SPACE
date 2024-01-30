#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
void timMax(int A[][50],int m,int n);
//void xuat(int A[][50],int m,int n);
int main()
{
	int m,n;
	int A[50][50];
	nhap(A,m,n);
	timMax(A,m,n);
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
void timMax(int A[][50],int m,int n)
{
	int max=A[0][0];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(max<A[i][j])
				max=A[i][j];
				
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(max==A[i][j])
				cout<<" dong "<<i+1<<" cot "<<j+1<<endl;
			
}
