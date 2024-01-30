#include<bits/stdc++.h>
using namespace std;
int n,A[100],ok;
void ktao(){
	for(int i=1;i<=n;i++)
		A[i]=0;
}
void sinh()
{
	int i=n;
	while(i>=1&&A[i]==1)
	{
		A[i]=0;
		i--;
	}
	if(i==0)
		ok=0;
	else
		A[i]=1;
}
int main()
{
	cin>>n;
	ok=1;
	while(ok==1)
	{
		for(int i=1;i<=n;i++)
			cout<<A[i];
		cout<<endl;
		sinh();
	}
		
}
