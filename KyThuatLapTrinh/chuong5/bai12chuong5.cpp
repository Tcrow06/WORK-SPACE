#include<bits/stdc++.h>
using namespace std;
int n,A[100],ok;
void kTao()
{
	for(int i=1;i<=n;i++)
		cin>>A[i];
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(A[i]>A[j])
				swap(A[i],A[j]);
}
void sinh()
{
	int i=n-1;
	while(i>=1&&A[i]>A[i+1])
		i--;
	if(i==0)
		ok=0;
	else
	{
		int j=n;
		while(A[i]>A[j])
			j--;
		swap(A[i],A[j]);
		int l=i+1,r=n;
		while(l<r)
		{
			swap(A[l],A[r]);
			l++;r--;
		}
	}
}
int main()
{
	cin>>n;
	ok=1;
	kTao();
	while(ok)
	{
		for(int i=1;i<=n;i++)
			cout<<A[i]<<" ";
		cout<<endl;
		sinh();
	}
}
