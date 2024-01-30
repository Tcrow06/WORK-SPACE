#include<bits/stdc++.h>
using namespace std;
void xuatNguoc(char a[]);
void xuatHoa(char a[]);
void xoaKCThua(char a[]);
void xuatDai(char a[]);
int main()
{
	char a[50];
	gets(a);
	puts(a);
	xuatNguoc(a);
	xuatHoa(a);
	xoaKCThua(a);
	xuatDai(a);
	return 0;
}
void xoaKCThua(char a[])
{
	while(a[0]==' ')
		for(int i=0;i<strlen(a);i++)
			a[i]=a[i+1];
	while(a[strlen(a)-1]==' ')
		a[strlen(a)-1]='\0';
	for(int i=1;i<strlen(a)-1;i++)
	{
		if(a[i]==' '&&a[i+1]==' ')
		{
			for(int j=i;j<strlen(a);j++)
				a[j]=a[j+1];
			i--;
		}
	}		
}
void xuatDai(char a[])
{
	char max[50];
	int i=0,n=0,s1;
	char s[50];
	while(a[i]!='\0')
	{
		s1=0;
		if(a[i]!=' ')
		{
			while(s[i]!='\0')
			{
				if(a[i]==' ')
					break;
				s[s1]=a[i];
				s1++;
				i++;
			}
			if(n<strlen(s))
			{
				strcpy(max,s);
				n=strlen(s);
			}
		}
		else
			i++;
	}
	max[n]='\0';
	cout<<max<<endl;	
	puts(a);
}
void xuatNguoc(char a[])
{
	int n=strlen(a);
	for(int i=n-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
}
void xuatHoa(char a[])
{
	int n=strlen(a);
	for(int i=0;i<n;i++)
		if(a[i]>='A'&&a[i]<='Z')
			cout<<a[i]<<endl;		
}




