#include<bits/stdc++.h>
using namespace std;
int tong(string a,int i);
int main()
{
	string s;
	cin>>s;
	int t=tong(s,0);
	cout<<t;
}
int tong(string a,int i)
{
	if(i>=a.size())
		return 0;
	else
		if(a[i]>'9'||a[i]<'0')
			return tong(a,i+1);
	else
		if(a[i]<='9'&&a[i]>='0')
	{
		int s=a[i]-'0';
		i+=1;
		while(a[i]>='0'&&a[i]<='9')
		{	
			s=s*10+(a[i]-'0');
			i++;
		}
		return s+tong(a,i+1);
	}
}
