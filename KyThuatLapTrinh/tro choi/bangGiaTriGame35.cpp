#include<iostream>
using namespace std;
void xuat(int A[][6]);
void taoBang(int A[][6]);
void xet(int A[][6],int i,int j);
int main()
{
	int A[36][6]={0};
	taoBang(A);
	xuat(A);
}
void xuat(int A[][6])
{
	for(int i=35;i>=0;i--)
	{
		for(int j=0;j<6;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
void taoBang(int A[][6])
{
	for(int i=35;i>=0;i--)
		for(int j=1;j<=5;j++)
			if((A[i][j]+i+j)<=35)
			{
				xet(A,i,j);
			}
}
void xet(int A[][6],int i,int j)
{
	if(A[i+j][j]==j)
	{
		int d=0;
		for(int e=1;e<=5;e++)
			if(A[i+j][e]==0)
					d++;
			if(d==4)
				A[i][j]=j;
	}
	else
		if(A[i+j][j]==0)
		{
			int d=0;
			for(int e=1;e<=5;e++)
				if(A[i+j][e]==0)
					d++;
			if(d==5)
				A[i][j]=j;
		}
}
