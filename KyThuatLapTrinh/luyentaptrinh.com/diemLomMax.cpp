//3 4
//3 1 5 6
//4 6 2 7
//8 3 7 6

#include<iostream>
using namespace std;
int y[4]={1,-1,0,0};
int x[4]={0,0,1,-1};
int a[101][101];
int m,n;
bool diemLom(int e,int h,int c)
{
	for(int i=0;i<4;i++)
	{
		int hang=h+x[i];
		int cot=c+y[i];
		if(0<=hang&&hang<m&&0<=cot&&cot<n)
			if(e>=a[hang][cot])
				return false;
	
	}
	return true;
}
int main()
{
	cin>>m>>n;
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int hang=-1,cot=-1;
	int max=INT_MIN;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			if(diemLom(a[i][j],i,j))
			{
				if(a[i][j]>max)
				{
					max=a[i][j];
					hang=i;
					cot=j;
				}
			}
	}
	if(hang==-1)
		cout<<-1;
	else
	{
		cout<<hang<<" "<<cot;
	}
}
