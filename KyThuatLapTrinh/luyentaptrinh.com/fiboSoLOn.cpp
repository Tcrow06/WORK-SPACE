#include<bits/stdc++.h>
using namespace std;
string tong(string a,string b)
{
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	if(a.size()<b.size());
		swap(a,b);
	while(a.size()>b.size()) b+='0';
	string s;
	int nho=0;
	for(int i=0;i<a.size();i++)
	{
		int x=(a[i]-'0')+(b[i]-'0')+nho;
		s+=char(x%10+'0');
		nho=x/10;
	}
	if(nho>0)
		s+=char(nho+'0');
	reverse(s.begin(),s.end());
	return s;
}
int main()
{
	int n;
	string a,b,kq;
	cin>>n;
	if(n==0)
		cout<<0;
	else
	{
		a="0";
		b="1";
		kq="1";
		for(int i=3;i<=n;i++)
		{
			a=b;
			b=kq;
			kq=tong(a,b);
		}
		cout<<kq;
	}
}
