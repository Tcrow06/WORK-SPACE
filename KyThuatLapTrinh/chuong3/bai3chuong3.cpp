#include<iostream>
#include<bits/stdc++.h>
using namespace std;
float tinh(int n)
{
	float s=0;
	int p=0;
	for(int i=1;i<=n;i++)
	{
		p=p+i; 
		s+=(float)1/p;
	}
	float x=1000000*s;
	if(x-int(x)>0)
	{
		if(x-int(x)>=0.5)
			s=(int)x+1;
		else
			s=(int)x;
			
	}
	s=s/1000000;
	return s;
}
int main()
{
	int n;
	float s;
	cin>>n;
	s=tinh(n);
	cout<<s;
}

