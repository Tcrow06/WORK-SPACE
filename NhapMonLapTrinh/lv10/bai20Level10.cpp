#include<iostream>
using namespace std;
void nhap(int A[][20],int&n);
void sapXep(int A[][20],int n);
void xuat(int A[][20],int n);
int main()
{
	int n;
	int A[20][20];
	nhap(A,n);
	sapXep(A,n);
	xuat(A,n);
	return 0;	
} 
void nhap(int A[][20],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
void xuat(int A[][20],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
void sapXep(int A[][20],int n)
{
	int k=n*n;
	for(int i=0;i<k;i++)
		for(int j=i+1;j<k;j++)
			if(A[i/n][i%n]>A[j/n][j%n])
			{
				int t=A[i/n][i%n];
				A[i/n][i%n]=A[j/n][j%n];
				A[j/n][j%n]=t;
			}
}












