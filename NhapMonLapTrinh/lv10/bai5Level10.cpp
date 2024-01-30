#include<bits/stdc++.h>
using namespace std;
void xoaKhoangTrong(char s[]);
int main()
{
	char s[50];
	gets(s);
	xoaKhoangTrong(s);
	puts(s);
}
void xoaKhoangTrong(char s[])
{
	int k=strlen(s);
	for(int i=0;i<k;i++)
		if(s[i]==' ')
		{
			s[i]=s[i+1];
			i--;
		}
}















