#include<bits/stdc++.h>
using namespace std;
void chuanHoa(string a)
{
	
	for(int i=0;i<a.size();i++)
		a[i]=tolower(a[i]);
		
	while(a[0]>'z'||a[0]<'a'||a[0]==' ')
	{
		a.erase(a.begin()+0);
	}
	while(a[a.size()-1]>'z'||a[a.size()-1]<'a'
						||a[a.size()-1]==' ')
	{
		a.erase(a.begin()+a.size()-1);
	}
	for(int i=0;i<a.size();i++)
		if(a[i]<'a'||a[i]>'z')
		{
			if(a[i+1]>='a'&&a[i+1]<='z')
				a[i]=' ';
			else
			{
				a.erase(a.begin()+i);
				i--;
			}
		}
	a[0]=toupper(a[0]);
	for(int i=0;i<a.size();i++)
		if(a[i]==' ')
			a[i+1]=toupper(a[i+1]);
	cout<<a;
}
int main()
{
	string a;
	getline(cin,a);
	chuanHoa(a);
	return 0;	
}
