#include<bits/stdc++.h>
using namespace std;
void tim(char s[][51],int n,char min[])
{
	strcpy(min,s[0]);
	for(int i=1;i<n;i++)
	{
		if(strcmp(s[i],min)<0)
			strcpy(min,s[i]);
	}
	
	for(int j=0;j<n;j++)
	{
		char k[51];
		for(int i=0;i<n;i++)
		{
			k[i]=s[i][j];
			
		}
		k[n]='\0';
		if(strcmp(k,min)<0)
			strcpy(min,k);
	}
	
	char cc[51],cp[51];
	for(int i=0;i<n;i++)
	{
		cc[i]=s[i][i];
		cp[i]=s[i][n-1-i];
	}
	cc[n]='\0';cp[n]='\0';
	if(strcmp(cc,min)<0)
		strcpy(min,cc);
	if(strcmp(cp,min)<0)
		strcpy(min,cp);
	puts(min);
	
}
int main()
{
	char s[51][51];
	gets(s[0]);
	int n=strlen(s[0]);
	for(int i=1;i<n;i++)
		gets(s[i]);
	char min[51];
	min[n]='\0';
	tim(s,n,min);
	return 0;
}
