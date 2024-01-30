#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void timSoChiaHet(char A[],int n);
bool chiaHet(char A[],int n);
int main()
{
	int n;
	cin>>n;
	char A[100];
	timSoChiaHet(A,n);
	puts(A);
	return 0;
}
void timSoChiaHet(char A[],int n)
{
	char x[20];
	itoa(n,x,10);
	int len=strlen(x);
	for(int i=0;i<len;i++)
		A[i]=1+'0';
	while(chiaHet(A,n)==false)
	{
		A[len++]=1+'0';
	}
}
bool chiaHet(char A[],int n)
{
	long long number=0;
	int i=0;
	int x=0;
	char kq[100];
	while(i<strlen(A))
	{
		number=number*10+(A[i]-'0');
		kq[x++]=number/n;
		number=number%n;
		i++;
	}
	if(number==0)
		return true;
	else
		return false;
}






