#include<iostream>

using namespace std;
 
int C[100],X[100]={0},n,A[100][100];
int chiPhiToiUu =INT_MAX;
int H[100];
void tinhChiPhi();
void lietKe(int i);
void xuat();
void nhap();
void tinhChiPhiToiUu ();
int tinhChiPhi(int nC);

int main()
{
	nhap();
	lietKe(0);
	xuat();
} 
void nhap()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
void xuat()
{
	for(int i=0;i<n;i++)
		cout<<H[i]<<" ";
	cout<<endl;
	cout<<chiPhiToiUu;
}
void tinhChiPhiToiUu ()
{
	int tmp = tinhChiPhi (n) + A[C[n-1]][C[0]];
	if (tmp < chiPhiToiUu)
	{
		chiPhiToiUu = tmp;
		for (int i = 0; i < n; i++)
			H[i] = C[i];
	}
}
int tinhChiPhi(int nC)
{
	int chiPhi=0;
	for(int i=0;i<nC-1;i++)
		chiPhi=chiPhi+A[C[i]][C[i+1]];
//	cout<<"chi phi: "<<chiPhi<<endl;
	return chiPhi;
}
void lietKe(int i)
{
	if(i==n)
		tinhChiPhiToiUu ();
	else
		for(int j=0;j<n;j++)
			{
				if(X[j]==0)
				{
					C[i]=j;
					int tmp = tinhChiPhi (i+1);
					if (tmp < chiPhiToiUu)
					{
						X[j] = 1;
						lietKe(i+1);	
						X[j]=0;
					}
				}
			}
}
//7
//0 2 4 5 3 1 7
//2 0 8 4 5 2 3
//4 8 0 9 4 4 3
//4 5 9 0 6 3 8
//3 5 4 6 0 2 5
//1 2 4 3 2 0 6
//7 3 3 8 5 6 0
