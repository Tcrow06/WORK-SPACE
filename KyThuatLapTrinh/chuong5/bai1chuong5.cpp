#include<iostream>
using namespace std;
void chuyenNhiPhan(int n);
void chuyen(int n);
int main()
{
	int n;
	cin>>n;
	chuyenNhiPhan(n);
	
}
void chuyenNhiPhan(int n)
{
	for(int i=1;i<=n;i++)
		chuyen(i);
}
void chuyen(int n)
{
	int na=0;
	int A[100];
	while(n>0)
	{
		A[na++]=n%2;
		n=n/2;
	}
	for(int i=na-1;i>=0;i--)
		cout<<A[i];
	cout<<endl;
}




