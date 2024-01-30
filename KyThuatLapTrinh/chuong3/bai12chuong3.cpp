#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
void nhan(char A[],char B[],char C[]);
void tinhNhan(long long n,char kq[]);
void chia6(char A[],char kq[]);
void xoaSo0(char kq[]);
void chuyen(long long n,char A[]);
int main()
{
	long long n;
	cin>>n;
	char kq[500];
	tinhNhan(n,kq);
	return 0;
}
void tinhNhan(long long x,char kq[])
{
	char n[100],n1[100],n2[100],kq1[200],kq2[300];
	chuyen(x,n);
	chuyen(x+1,n1);
	chuyen(x+2,n2);
	
	nhan(n,n1,kq1);	
	nhan(kq1,n2,kq2);
	chia6(kq2,kq);
	
	cout<<kq;
}
void chuyen(long long n,char A[])
{
	int i=0;
	while(n>0)
	{
		A[i++]=n%10+'0';
		n=n/10;
	}
	A[i]='\0';
	strrev(A);
}
void chia6(char A[],char kq[])
{
	int n=0;
	int i=0;
	int number=0;
	while(i<strlen(A))
	{
		number=number*10+(A[i]-'0');
		kq[n++]=number/6+'0';
		number=number%6;
		i++;
	}
	kq[n]='\0';
	xoaSo0(kq);
}
void xoaSo0(char kq[])
{
	strrev(kq);
	int i=strlen(kq)-1;
	while(i>=0&&kq[i]=='0')
		i--;
	kq[i+1]='\0';
	strrev(kq);
}
void nhan(char A[],char B[],char C[])
{	
	
	int lenA=strlen(A);
	int lenB=strlen(B);
	
	strrev(A);
	strrev(B);
	
	for(int i=0;i<lenA+lenB;i++)
		C[i]='0';
		
	for(int iB=0;iB<lenB;iB++)	
	{
		int iA;
		int nho=0;
		for(iA=0;iA<lenA;iA++)
		{
			long long x=(A[iA]-'0')*(B[iB]-'0')+nho+(C[iA+iB]-'0');
			C[iA+iB]=x%10+'0';
			nho=x/10;
		}
		if(nho>0)
			C[iA+iB]=nho+'0';
	}
	if(C[lenA+lenB-1]!='0')
		C[lenA+lenB]='\0';
	else
		C[lenA+lenB-1]='\0';
	strrev(C);
}






