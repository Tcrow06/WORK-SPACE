#include<bits/stdc++.h>
using namespace std;
void tinh(int n,int m)
{
	if(n%2==0)
	{
		if(n>4)
			cout<<n*m*0.85;
		else
			cout<<n*m;
	}
	else if(n%2!=0)
	{
		if(n>5)
			cout<<n*m*0.8;
		else
			cout<<n*m;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	tinh(n,m);
	return 0;
}
