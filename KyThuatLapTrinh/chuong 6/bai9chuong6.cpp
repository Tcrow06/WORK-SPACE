#include<bits/stdc++.h>
using namespace std;
void dem(string s)
{
	int c[257]={0};
	for(int i=0;i<s.size();i++)
	{
		c[int(s[i])]++;
	}
	for(int i=0;i<=256;i++)
		{
			if(c[i]!=0)
			{
				cout<<"ki tu "<<char(i)<<" xuat hien "<<c[i]<<" lan ";
				cout<<endl;
			}
		}
			
}
int main()
{
	string s;
	cin>>s;
	dem(s); 
	return 0;
}
