#include<iostream>
using namespace std;
int toHop(int n,int k);

int main()
{
	int n,k;
	cout<<"nhap n va k: ";
	cin>>n>>k;
	int t=toHop(n,k);
	cout<<t;
}
int toHop(int n,int k)
{
	if(n==k||k==0)
		return 1;
	else
		return toHop(n-1,k)+toHop(n-1,k-1);
}
