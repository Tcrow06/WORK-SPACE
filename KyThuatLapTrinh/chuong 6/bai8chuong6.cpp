#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pascal(int n,int k)
{
	if(n==k||k==0)
		return 1;
	else
		return pascal(n-1,k-1)+pascal(n-1,k);
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
			cout<<setw(10)<<pascal(i,j);
		cout<<endl;
	}
	return 0;
 } 
