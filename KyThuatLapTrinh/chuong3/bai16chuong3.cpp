#include<iostream>
#include<string.h>
using namespace std;
void chenSo(char s[]);
void themVaoMang(char s[],int viTri,int so);
int main()
{
	char s[2002];
	cin.getline(s,2002);
	chenSo(s);
cout<<s;
} 
void chenSo(char s[])
{
	int vt;
	int x=1;
	for(vt=0;vt<strlen(s);vt++)
		if(s[vt]=='>')
		{
			themVaoMang(s,vt,x);
			break;
		}
	int i=vt;
	int trai=x+1;
	themVaoMang(s,vt,trai);
	for(;i>=0;i--)
	{
		if(s[i]=='<')
		{
			trai--;
			themVaoMang(s,i,trai);
			
		}
		if(s[i]=='>')
		{
			trai++;
			themVaoMang(s,i,trai);
			
			}	
	}	
	
			
}
void themVaoMang(char s[],int viTri,int so)
{
	int i=strlen(s);
	for(;i>viTri;i--)
	{
		s[i+1]=s[i];
	}
	s[i]=so+'0';
}





