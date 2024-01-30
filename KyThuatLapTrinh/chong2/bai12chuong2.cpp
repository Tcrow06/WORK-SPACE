#include<iostream>
# define SIZE 100
using namespace std;

void taoBaiMin(int A[][SIZE],int m,int n);
void xuat(int A[][SIZE],int m,int n);
void nhap(int A[][SIZE],int&m,int&n);

int main()
{
	int A[SIZE][SIZE],m,n;
	nhap(A,m,n);
	taoBaiMin(A,m,n);
	xuat(A,m,n);
	return 0;
}
void taoBaiMin(int A[][SIZE],int m,int n)
{
	int X[8]={-1,  0,  1, -1, -1, 0, 1, 1};
	int Y[8]={-1, -1, -1,  0,  1, 1, 1, 0};
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(A[i][j]==0)
				for(int x=0;x<8;x++)
					if(A[i+X[x]][j+Y[x]]==9)
						A[i][j]++;   
}
void xuat(int A[][SIZE],int m,int n)
{
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
void nhap(int A[][SIZE],int&m,int&n)
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
			if(A[i][j]==1)
				A[i][j]=9;
		}
}
