#include<iostream>
using namespace std;
int uc(int x,int y)
{
//	while(x!=y)
//	{
//		if(x>y)
//			x=x-y;
//		else
//			y=y-x;
//	}
//	return y;
	if(x*y==0)
		return x+y;
	else
	{
		return (uc(y,x%y));
	}
}
int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=i+1;j<=10;j++)
		{
			if((uc(i,j)==1)&&i<j)
			{
				cout<<i<<"/"<<j<<endl;
			}
		}
	}
//	int n,m;
//	cin>>m>>n;
//	cout<<uc(m,n);
	return 0;
}
