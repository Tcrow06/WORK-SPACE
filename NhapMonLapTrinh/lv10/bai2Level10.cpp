#include<bits/stdc++.h>
using namespace std;
int chuyen10sang2(int n);
int chuyen10sang8(int n);
void chuyen10sang16(int n,char he16[]);
void xuat(int z)
{
	cout<<z<<endl;;
}
int main()
{
	int n;
	cin>>n;
	char he16[20];
	int he2=chuyen10sang2(n);
	xuat(he2);
	int he8=chuyen10sang8(n);
	xuat(he8);
	chuyen10sang16(n,he16); 
}
int chuyen10sang2(int n)
{
	int i=0;
	int a;
	int d=n;
	while(d>0)
	{
		a+=(d%2)*pow(10,i);
		d/=2;
		i++;
	}
	return a;
}
int chuyen10sang8(int n)
{
	int i=0;
	int a=0;
	while(n>0)
	{
		a+=(n%8)*pow(10,i);
		n/=8;
		i++;
	}
	return a;
}
void chuyen10sang16(int n,char he16[])
{
	int i=0;
	while(n>0)
	{
		int x=n%16;
		if(x>=10)
		{
			he16[i]=x-10+'A';
			i++;
		}
		else
		{
			he16[i]=x+'0';
			i++;
		}
		n/=16;
	}
	strrev(he16);
	cout<<he16;
}













