#include<iostream>
using namespace std;
int n,B[100]={0},X[100],A[100][100]={0},hang=1;
void themMang();
void xuat();
void trry(int k);
int main()
{
	cin>>n;
	trry(1);
	xuat();
}
void xuat()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
void trry(int k)
{
	if(k==n+1){
		themMang();
			hang++;
	}
	else
		for(int i=1;i<=n;i++)
		{
			if(B[i]==0)
			{
				X[k]=i;
				B[i]=1;
				trry(k+1);
				B[i]=0;
			}
		}
}
void themMang()
{
	for(int j=1;j<=n;j++)
	{
		A[hang][j]=X[j];
		if(hang!=1)
		{
			int h;
			for(h=hang-1;h>0;h--)
			{
				if(A[h][j]==X[j])
					break;	
			}	
			if(h!=0)
			{
				for(int i=1;i<n;i++)
					A[hang][i]=0;
				hang--;
				break;
			}
		}	
	}	
}






