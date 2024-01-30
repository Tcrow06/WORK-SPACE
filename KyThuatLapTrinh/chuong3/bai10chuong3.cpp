#include<iostream>
#include<string.h>
using namespace std;
void nhap(char  s[]);
void phanLoai(char s[],char ct[],char ch[],char so[],char khac[]);
void xuat(char ct[],char ch[],char so[],char khac[]);
int main()
{
	char s[50],ct[50],ch[50],so[50],khac[50];
	nhap(s);
	phanLoai(s,ct,ch,so,khac);
	xuat(ct,ch,so,khac);
	return 0;	
}
void nhap(char  s[])
{
	cout<<"nhap chuoi: ";
	gets(s);
//	for(int i=0;i<strlen(s);i++)
//		cout<<s[i];
//	cout<<endl;
}
void phanLoai(char s[],char ct[],char ch[],char so[],char khac[])
{
	int n1=0,n2=0,n3=0,n4=0;
//	cout<<strlen(s);
	for(int i=0;i<strlen(s);i++)
	{
		if('a'<=s[i]&&s[i]<='z')
		{
			ct[n1++]=s[i];
//			cout<<ct[n1-1];
////			cout<<"\nco\n";
		}
		else
			if('A'<=s[i]&&s[i]<='Z')
			ch[n2++]=s[i];
		else
			if('0'<=s[i]&&s[i]<='9')
			so[n3++]=s[i];
		else
			khac[n4++]=s[i];
			
	}
//	cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl; 
	ct[n1]='\0';
	ch[n2]='\0';
	so[n3]='\0';
	khac[n4]='\0';
}
void xuat(char ct[],char ch[],char so[],char khac[])
{
	cout<<endl<<"chu thuong: ";
	puts(ct);
	cout<<"chu hoa: ";
	puts(ch);
	cout<<"so: ";
	puts(so);
	cout<<"khac: ";
	puts(khac);
//	cout<<endl<<endl;
}
