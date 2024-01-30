#include<iostream>
//#include<string.h>
#include<cstring> 
using namespace std;
void nhap(char a[],char b[],int&na,int&nb);
void tong(char a[],char b[],int na,int nb);
void hieu(char a[],char b[],int na,int nb);
int main()
{
	char a[100],b[100];
	int na,nb;
	nhap(a,b,na,nb);
	tong(a,b,na,nb);
	hieu(a,b,na,nb);
	return 0;
}
void nhap(char a[],char b[],int&na,int&nb)
{
	cout<<"nhap 2 so a,b: \n";
	cin>>a>>b;
	if((strcmp(a,b)<0&&strlen(a)==strlen(b))||(strlen(a)<strlen(b)))
	{
		char tam[100];
		strcpy(tam,a);
		strcpy(a,b);
		strcpy(b,tam);
	}
	strrev(a);
	strrev(b);	
	na=strlen(a);
	nb=strlen(b);
	if(na>nb)
	{
		for(int i=nb;i<na;i++)
			b[i]='0';
	}
}
void hieu(char a[],char b[],int na,int nb)
{
	if(strcmp(a,b)==0)
		cout<<"\nhieu = "<<0;
	else
	{
		char hieu[1000];
		for(int i=0;i<na;i++)
			hieu[i]='0';
		hieu[na]='\0';
		int nho=0;
		int h=0;
		for(int i=0;i<na;i++)
		{
			int x=(a[i]-'0')-(b[i]-'0')-nho;
			nho=0;
			if(x<0)
			{
				x+=10;
				nho++;
			}
			hieu[h++]=x+'0';		
		}
		if(hieu[na-1]!='0')
			hieu[na]='\0';
		else
			hieu[na-1]='\0';
		strrev(hieu);
		cout<<"\nhieu = "<<hieu;
	}
}
void tong(char a[],char b[],int na,int nb)
{
	char tong[100];
	for(int i=0;i<=na;i++)
		tong[i]='0';
	tong[na+1]='\0';
	int nho=0;
	int i;
	for(i=0;i<na;i++)
	{
		int x=(a[i]-'0')+(b[i]-'0')+nho;
		nho=0;
		if(x>9)
		{
			x=x%10;
			nho++;
		}
		tong[i]=x+'0';
	}
	if(nho>0)
		tong[i]=nho+'0';
	if(tong[na]!='0')
		tong[na+1]='\0';
	else
		tong[na]='\0';
	strrev(tong);
	cout<<"tong = "<<tong;
}








