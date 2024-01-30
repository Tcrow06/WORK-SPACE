#include<iostream>
using namespace std;
void xoaKhoangTrang(string&s);
void hoa(string&s);
int main()
{
	string s;
	getline(cin,s);
	xoaKhoangTrang(s);
	hoa(s);
	cout<<s;
}
void hoa(string&s)
{
	for(int i=0;i<s.size();i++)
		s[i]=tolower(s[i]);
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++)
		if(s[i]==' ')
			s[i+1]=toupper(s[i+1]);
}
void xoaKhoangTrang(string&s)
{
	while(s[0]==' ')
		s.erase(s.begin()+0);
	while(s[s.size()-1]==' ')
		s.erase(s.begin()+s.size()-1);
		
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			s.erase(s.begin()+i);
			i--;
		}
			
	}
}
