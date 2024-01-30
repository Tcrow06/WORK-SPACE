#include<bits/stdc++.h>
using namespace std;
//int dem;
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void dem(int A[],int n)
{
	int d=0;
	bool check=false;
	for(int i=0;i<n;i++)
	{
		if(A[i]<A[i+1])
		{
			cout<<A[i]<<" ";
			check=true;
		}
		else
		{
			if(check)
			{
				d++;
				check=false;
				cout<<A[i]<<" ";
				cout<<endl;
			}
			int j;
			for(j=i+1;j<n;j++)
				if(A[j]<A[j+1])
					break;
			i=j-1;	
		}
	}
	if(check)
		d++;
	cout<<endl<<d;
		
}
int main()
{
	int n,A[100];
	nhap(A,n);
	dem(A,n);
	
}

