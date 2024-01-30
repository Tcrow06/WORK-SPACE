#include<iostream>
using namespace std;
void lietKeNP(int k);
void xuat();
int A[100],n;
int main()
{
	cin>>n;
	lietKeNP(0);
	return 0;
}
void lietKeNP(int k)
{
	if(k==n)
		xuat();
	else
	{
		for(int i=0;i<=1;i++)
		{
			A[k]=i;
			lietKeNP(k+1);
		}
	}
}
void xuat()
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
