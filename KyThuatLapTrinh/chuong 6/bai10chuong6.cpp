#include<bits/stdc++.h>
using namespace std;
void dao(string s)
{
	stringstream ss(s);
	string tmp;
	while(ss>>tmp)
	{
		reverse(tmp.begin(),tmp.end());
		cout<<tmp<<" ";
	}
}
int main()
{
	string s;
	getline(cin,s);
	dao(s);
	return 0;
	
}
