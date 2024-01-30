#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[50];
	gets(s);
	int len = strlen(s);
	int i=0;
	int temp=0;
	while(i<len)
	{
		int a;
		if( (s[i]>='A'&&s[i]<='Z') && (s[i+1]>='2'&&s[i+1]<='9') )
		{
			if(s[i]=='H') a=1;
			else 
				if(s[i]=='O') a=16;
			else 
				if(s[i]=='N') a=14;
			else 
				if(s[i]=='C') a=12;
			temp+= a*(s[i+1]-'0');
			i=i+2;
		}
		else 
			if ( (s[i]>='A'&&s[i]<='Z') && ((s[i+1]>='A' && s[i+1]<='Z')||s[i+1]=='\0') )
		{
			if(s[i]=='H') a=1;
			else 
				if(s[i]=='O') a=16;
			else 
				if(s[i]=='N') a=14;
			else 
				if(s[i]=='C') a=12;
			temp += a;
			i++;
		}
	}
	cout<<temp;
	return 0;
}
