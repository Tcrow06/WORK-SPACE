#include<iostream>
#include<string.h>
using namespace std;
void chuyenBatPhan(int n);
void chuyenThapLucPhan(int n);
void chuyenNhiPhan(int n);
void xuatInt(int A[],int n);
int main()
{
	int n;
	cin>>n;
	chuyenNhiPhan(n);
	chuyenBatPhan(n);
	chuyenThapLucPhan(n);
	return 0;
}
void chuyenThapLucPhan(int n)
{
	char s[50];
	int i=0;
	for(;n>0;i++)
	{
		int a=n%16;
		if(a>9)
		{
			s[i]=a-10+'A';
		}
		else
			s[i]=a+'0';
		n/=16;
	}
	strrev(s);	
	cout<<s;
}
void chuyenBatPhan(int n)
{
	int A[100],i=0;
	for(;n>0;i++)
	{
		A[i]=n%8;
		n/=8;
	}
	xuatInt(A,i);
}
void chuyenNhiPhan(int n)
{
	int A[100],i=0;
	for(;n>0;i++)
	{
		A[i]=n%2;
		n=n/2;
	}
	xuatInt(A,i);
}
void xuatInt(int A[],int n)
{
	for(int i=n-1;i>=0;i--)
		cout<<A[i];
	cout<<endl;
}





