#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
void timViTriSNT(int A[][50],int m,int n);
bool snt(int x);
int main()
{
	int m,n;
	int A[50][50];
	nhap(A,m,n);
	timViTriSNT(A,m,n);
	return 0;
}
bool snt(int x)
{
	if(x<2)
		return false;
	else
	{
		for(int i=2;i<x;i++)
			if(x%i==0)
				return false;
		return true;
	}
	
}
void nhap(int A[][50],int&m,int&n)
{
	cout<<"nhap dong: ";
	cin>>m;
	cout<<"nhap cot: ";
	cin>>n;
	cout<<"nhap mang: "<<endl;;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
void timViTriSNT(int A[][50],int m,int n)
{
	int d=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(snt(A[i][j]))
			{
				cout<<i<<" "<<j;
				d++;
				break;
			}
		}
		if(d>0)
			break;	
	}
}

