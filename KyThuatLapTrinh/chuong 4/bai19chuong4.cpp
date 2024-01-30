//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int A[100][100],cot[100]={0},d1[100]={0},d2[100]={0};
int X[100],n;
void queen(int i);
void inkq();
int main()
{
	cin>>n;
	queen(1);
}
void inkq()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
}
void queen(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(cot[j]==0&&d1[i-j+n]==0&&d2[i+j-1]==0)
		{
			cot[j]=1;
			d1[i-j+n]=1;d2[i+j-1]=1;
			A[i][j]=1;
			if(i==n)
				inkq();
			else
				queen(i+1);
			cot[j]=0;d1[i-j+n]=0;d2[i+j-1]=0;
			A[i][j]=0;
		}
		
	}
}

