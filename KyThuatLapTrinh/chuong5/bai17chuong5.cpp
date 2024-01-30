#include<bits/stdc++.h>
using namespace std;
int n,a[100],k,ok,X[100],A[100];

void xuat()
{
	for(int i=1;i<=k;i++)
		cout<<A[a[i]];
		
	cout<<endl;
}
void chinh(int i)
{

	for(int j=1;j<=n;j++)
	{
		if(X[j]==0)
		{
			a[i]=j;
			if(i==k)
				xuat();
			else
			{
				X[j]=1;	
				chinh(i+1);
				X[j]=0;	
			}	
			
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>A[i];
	memset(X,0,n+1);
	chinh(1);

}
