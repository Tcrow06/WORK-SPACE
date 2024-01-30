#include<iostream>
#include<string.h>
using namespace std;
void daoChuoi(char s[]);
int main()
{
	char s[20];
	gets(s);
	daoChuoi(s);
	puts(s);
}
void daoChuoi(char s[])
{
	strrev(s);
}



















