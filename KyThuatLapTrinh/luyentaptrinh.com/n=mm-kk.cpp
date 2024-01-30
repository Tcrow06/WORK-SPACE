#include<iostream>
#include<math.h>
using namespace std;
void nhap(long long&n);
void xuat(long long q,long long m,long long k);
int tim(long long n,long long&m,long long&k);
int main()
{
	long long n,m,k;
	nhap(n);
	int q=tim(n,m,k);
	xuat(q,m,k);
	return 0;
}
void nhap(long long&n)
{
	cin>>n;
}
void xuat(long long q,long long m,long long k)
{
	if(q==1)
		cout<<m<<" "<<k;
	else
		cout<<q;
}
int tim(long long n,long long&m,long long&k)
{
	int A[100],B[100];
	int t=0;
	int d=0;
	for(int i=n;i>=sqrt(n);i--)
	{
		for(int j=0;j<=sqrt(i*i-n);j++)
		{
			if(n==i*i-j*j)
			{	
				A[t]=i;
				B[t]=j; 
				t++;
				d++;	
			}	
		}	
	}
	int tru=A[0]-B[0];
	for(int x=1;x<d;x++)
		{
			if(tru>=(A[x]-B[x]))	
			{
				m=A[x];
				k=B[x];
			}
			return 1;
		}
	return -1;
}

