#include<bits/stdc++.h>
using namespace std;
int tongCacSoTrongXau(string s);
int main()
{
	string s;
	getline(cin,s);
	int k=tongCacSoTrongXau(s);
	cout<<k;
	return 0;
}
int tongCacSoTrongXau(string s)
{
	int x=0;
	int t=0;
	for(int i=0;i<s.size();i++)
	{
		if('0'<=s[i]&&s[i]<='9')
			x=x*10+(s[i]-'0');
		else
		{
			t+=x;
			x=0;
		}
	}
	t+=x;
	return t;		
}






