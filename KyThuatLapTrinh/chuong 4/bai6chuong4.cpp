#include<iostream>
using namespace std;
int fina(int n);
int main()
{
	int n;
	cin>>n;
	int t=fina(n);
	cout<<t;
}
int fina(int n)
{
	if(n==1||n==0)
		return 1;
	else
		return fina(n-1)+fina(n-2);
}
