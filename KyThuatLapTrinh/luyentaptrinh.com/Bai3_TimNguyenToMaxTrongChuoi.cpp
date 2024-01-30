#include<bits/stdc++.h>
using namespace std;
bool snt(int a)
{
	if(a<2)
		return false;
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0)
			return false;
	return true;
	
}
void tinh(char a[])
{
	int n=strlen(a);
	int d=0;
	int tam=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			tam=tam*10+(a[i]-'0');
		if((a[i+1]>='a'&&a[i+1]<='z')||a[i+1]==' '||a[i+1]=='\0')
		{
			if(tam>d)
				d=tam;
			tam=0;
		}
	}
	cout<<d;
}
int main()
{
	char a[100];
	gets(a); 
	tinh(a);
	return 0;
	
}
