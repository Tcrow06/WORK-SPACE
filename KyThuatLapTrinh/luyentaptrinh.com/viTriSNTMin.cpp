#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int&n);
void xuat(int k);
int viTriNTMin(int A[],int n);
bool snt(int n);
int A[100];
int main()
{
	int n;
	nhap(A,n);
	int k=viTriNTMin(A,n);
	xuat(k);
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int k)
{
	cout<<k;
}
int viTriNTMin(int A[],int n)
{
	int q;
	int t=-1;
	for(int i=0;i<n;i++)
		if(snt(A[i]))
		{
			q=A[i];
			break;
		}	
	for(int i=0;i<n;i++)
		if(snt(A[i]))
		{
			if(q>A[i])
			{
				q=A[i];
				t=i;
			}
		}
	if(t==-1)
		return -1;
	else 
		return t;
}
bool snt(int n)
{
	if(n<=1)
		return false;
	else
	{
		for(int i=2;i<sqrt(n);i++)
			if(n%i==0)
				return false;
		return true;
	}
	
}




