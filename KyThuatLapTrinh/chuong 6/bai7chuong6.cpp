#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int tim(int A[],int n)
{
	int sum=0,begin,end;
	bool check=false;
	int i;
	for(i=0;i<n;i++)
	{
		if(A[i]<A[i+1])
		{
			if(sum==0)
				begin=i;
			sum+=A[i];
		}
		else
			break;
	}
	sum+=A[i];
	end=i;
	int be,en;
	int tmp=0;
	for(;i<n;i++)
	{
		if(A[i]<A[i+1])
		{
			if(tmp==0)
				be=i;
			tmp+=A[i];
			check=true;
		}
		else
		{
			if(check)
			{
				tmp+=A[i];
				check=false;
				en=i;
			}
			int j;
			for(j=i+1;j<n;j++)
				if(A[j]<A[j+1])
					break;
			i=j-1;
			if(tmp>sum)	
			{
				sum=tmp;
				begin=be;
				end=en;
			}
			tmp=0;
		}
	}
	if(tmp>sum)
	{
		sum=tmp;
		begin=be;
		end=en;
	}
	cout<<sum<<endl;
	for(int j=begin;j<=end;j++)
		cout<<A[j]<<" ";
	cout<<endl;
	
}
int main()
{
	int n,A[100];
	nhap(A,n);
	int t=tim(A,n);
}
