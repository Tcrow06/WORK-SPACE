#include<iostream>
using namespace std;
int timViTriDL(int A[][100],int m,int n,int C[],int D[]);
void nhap(int A[][100],int&m,int&n);
int timMin(int B[],int nB);
bool laDiemLoi(int A[][100],int i,int j,int m,int n);
void xuat(int C[],int D[],int a);
int main()
{
	int A[100][100],m,n,D[100],C[100];
	nhap(A,m,n);
	int viTri=timViTriDL(A,m,n,C,D);
	xuat(C,D,viTri);
	return 0;
}
void xuat(int C[],int D[],int a)
{
	if(a==-1)
		cout<<-1;
	else
		cout<<C[a]<<" "<<D[a];
	
}
void nhap(int A[][100],int&m,int&n)
{
	cout<<"nhap m*n: ";
	cin>>m>>n;
	cout<<"nhap A=\n";
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
int timViTriDL(int A[][100],int m,int n,int C[],int D[])
{
	int viTri;
	int B[100]={0},nB=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(laDiemLoi(A,i,j,m,n))
			{
				B[nB]=A[i][j];
				C[nB]=i;
				D[nB]=j;
				nB++;
			}
	if(nB==0)
		return -1;
	viTri=timMin(B,nB);
	return viTri;
}
int timMin(int B[],int nB)
{
	int vt, min=B[0];
	for(int i=1;i<nB;i++)
		if(min>B[i])
		{
			min=B[i];
			vt=i;
		}
	return vt;
}
bool laDiemLoi(int A[][100],int i,int j,int m,int n)
{
	int X[4]={0,0,-1,1};
	int Y[4]={-1,1,0,0};
	for(int k=0;k<4;k++)
		if((i+X[k]>=0)&&(j+Y[k]>=0)&&(i+X[k]<m)&&(i+Y[k]<n))
			if(A[i][j]<A[i+Y[k]][j+X[k]]) 
				return false;
	return true;
}








