#include<bits/stdc++.h>
using namespace std;
void tinh(int n);
int F[100000];
int main()
{
	int n;cin>>n;
	F[0]=0;
	F[1]=1;
	tinh(n);
	for(int i=0;i<=n;i++)
		cout<<F[i]<<" ";
	cout<<endl;
	cout<<F[n];
}
void tinh(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
			F[i]=F[i/2];
		else
			F[i]=F[(i-1)/2]+F[(i-1)/2+1];
	}
}
