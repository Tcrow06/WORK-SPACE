#include<iostream>
using namespace std;
int X[8]={-1,-1,-2,-2,1,1,2,2};
int Y[8]={-2,2,-1,1,-2,2,-1,1};
int A[8][8]={0};
void diTuan(int x,int y);
void xuat()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
int dem=0;
int main()
{
	diTuan(0,0);
}
void diTuan(int x,int y)
{
	
	dem++;
	A[x][y]=dem;
	if(dem==8*8)
	{
		cout<<"cac quan ma da di: \n";
		xuat();
		exit(0);
	}
	else
	{
		for(int i=0;i<8;i++)
		{
			int u=X[i]+x;
			int v=Y[i]+y;
			if(0<=u&&u<8&&0<=v&&v<8&&A[u][v]==0)
				diTuan(u,v);
		}
		dem--;
		A[x][y]=0;
	}
}
	
	
	
	
	
	
	






