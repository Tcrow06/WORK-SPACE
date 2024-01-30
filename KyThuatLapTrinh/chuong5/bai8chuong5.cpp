#include<bits/stdc++.h>
using namespace std;
int ktra(string s)
{
	int l=0,r=s.size()-1;
	while(l<r)
	{
		if(s[l]!=s[r])
			return 0;
		l++;
		r--;
	}
	return 1;
}
int main()
{
	string s;
	getline(cin,s);
	if(ktra(s))
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
