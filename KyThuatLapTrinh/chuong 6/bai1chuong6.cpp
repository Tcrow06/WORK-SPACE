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
	int x=0;
	int X[100];
	while(n>0)
	{
		X[x++]=n%2;
		n=n/2;
	}
	for(int i=x-1;i>=0;i--)
		cout<<X[i];
	cout<<endl;
}




