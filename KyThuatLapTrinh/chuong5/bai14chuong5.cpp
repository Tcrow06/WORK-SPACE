#include<bits/stdc++.h>
using namespace std;
int F(int n)
{
	if(n==0)
		return 0;
	else
		if(n==1)
			return 1;
	else
		if(n%2==0)
			return F(n/2);
	else
		return F(n/2)+F(n/2+1);
}
int main()
{
	int n;
	cin>>n;
	cout<<F(n);
}
