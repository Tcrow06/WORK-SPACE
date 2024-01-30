#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
void nhap(char A[],char B[]);
void nhan(char A[],char B[],char C[]);
int main()
{
	char C[200],A[SIZE],B[SIZE];
	nhap(A,B);
	nhan(A,B,C);
	cout<<C;
	return 0;
}
void nhap(char A[],char B[])
{
	cout<<"nhap hai so:\n";
	cin.getline(A,SIZE);
	cin.getline(B,SIZE);
}
void nhan(char A[],char B[],char C[])
{
	strrev(A);
	strrev(B);
	int lenA=strlen(A);
	int lenB=strlen(B);
	for(int i=0;i<lenA+lenB;i++)
		C[i]='0';
	for(int iB=0;iB<lenB;iB++)
	{
		int nho=0,iA;
		for(iA=0;iA<lenA;iA++)
		{
			int x=(A[iA]-'0')*(B[iB]-'0')+nho+(C[iA+iB]-'0');
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
















