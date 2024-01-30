#include<bits/stdc++.h>
using namespace std;
void copyDau(char s[],char s1[],int n);
void copyCuoi(char s[],char s2[],int n);
void copyPos(char s[],char s3[],int n);
int main()
{
	char s[50],s1[50],s2[50],s3[50];
	gets(s);
	int n;
	cout<<"nhap n=";
	cin>>n;
	copyDau(s,s1,n);
	copyCuoi(s,s2,n);
	copyPos(s,s3,n);
	puts(s1);
	puts(s2);
	puts(s3);
}
void copyDau(char s[],char s1[],int n)
{

	for(int i=0;i<n;i++)
	{
		s1[i]=s[i];
	}
	s1[n]='\0';
}
void copyCuoi(char s[],char s2[],int n)
{
	int x=0;
	int k=strlen(s);
	for(int i=k-n;i<k;i++)
	{
		s2[x]=s[i];
		x++;
	}
	s2[n]='\0';
}
void copyPos(char s[],char s3[],int n)
{
	int pos;
	cout<<"nhap vi tri pos=";
	cin>>pos;
	int x=0;
	for(int i=pos;i<n+pos;i++)
	{
		s3[x]=s[i];
		x++;
	}
	s3[n+pos]='\0';
}









