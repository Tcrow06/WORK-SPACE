#include<bits/stdc++.h>
using namespace std;
int prime[10000],n;
void sieve(){
	memset(prime,1,10000);
	prime[0]=prime[1]=0;
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=n;j+=i)
				prime[j]=0;
				
		}
	}
}
void xuat(){
	for(int i=1;i<=n;i++)
		if(prime[i])
			cout<<i<<" ";
}
int main()
{
	cin>>n;
	sieve();
	xuat();
	
}
