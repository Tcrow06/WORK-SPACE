#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void xoaPhanTu(int A[],int&n,int vitri);
void xoaTatLap(int A[],int&n);
void xuat(int A[],int n);
int A[1000];
int main()
{
	int n;
	nhap(A,n);
	xoaTatLap(A,n);
	xuat(A,n);
	return 0;		
} 
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i]; 
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
 } 
void xoaPhanTu(int A[],int&n,int vitri)
{
	for(int i=vitri;i<n-1;i++) 
		A[i]=A[i+1];
	n--;
}
void xoaTatLap(int A[],int&n)
{
	for(int x=0;x<n;x++)
	{
		int dem=0;
		for(int y=1;y<n;y++)
		{
			if(A[x]==A[y]&&x!=y)
				{
					xoaPhanTu(A,n,y);
					y--;
					dem++;
				}
		}
		if(dem>0)
		{
			xoaPhanTu(A,n,x);
			x--;
		}				
	}
}
