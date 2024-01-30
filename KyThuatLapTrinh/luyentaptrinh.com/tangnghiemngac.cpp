#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n)
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
int ktra(int A[][50],int m,int n)
{
	int dem=0;
	int k=0;
	for(int i=0;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(A[i][j-1]>A[i][j])
				break;
			k++;	
		}
		if(k==n-1)
			dem++;
		k=0;
	}
	return dem;
		
}
void xuat(int d)
{
	cout<<d;
}
int main()
{
	int m,n;
	int A[50][50];
	nhap(A,m,n);
	int d=ktra(A,m,n);
	xuat(d);	
} 
