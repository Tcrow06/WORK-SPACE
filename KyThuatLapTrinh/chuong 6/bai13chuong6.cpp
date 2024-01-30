#include<iostream>
using namespace std;

void tinh(int C[][100],int n)
{
	for(int i=0;i<=n;i++)
	{
		C[i][0]=1;
		C[i][i]=1;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<i;j++)
			C[i][j]=C[i-1][j-1]+C[i-1][j];
	}
}
void xuat(int C[][100],int n,int k)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
			cout<<C[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	int C[100][100];
	tinh(C,n);
	xuat(C,n,k);
	return 0;
}
