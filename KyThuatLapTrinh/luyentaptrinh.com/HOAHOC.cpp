#include<bits/stdc++.h>
using namespace std;
void tinh(string a)
{
	int s=0; 
	int n=a.size();
	for(int i=0;i<n;i++)
	{
		if(a[i]=='H')
		{
			if(a[i+1]>='2'&&a[i+1]<='9')
			{
				s+=(a[i+1]-'0');
				i++;
			}
			else
				s+=1;
		}		 
		else if(a[i]=='O')
		{
			if(a[i+1]>='2'&&a[i+1]<='9')
			{
				s+=(a[i+1]-'0')*16;
				i++;
			}
			else
				s+=16;
		}
		else if(a[i]=='N')
		{
			if(a[i+1]>='2'&&a[i+1]<='9')
			{
				s+=(a[i+1]-'0')*14;
				i++;
			}
			else
				s+=14;
		}
		else if(a[i]=='C')
		{
			if(a[i+1]>='2'&&a[i+1]<='9')
			{
				s+=(a[i+1]-'0')*12;
				i++;
			}
			else
				s+=12;
		}
	}
	cout<<s;			
}
int main()
{
	string a;
	cin>>a;
	tinh(a);
	return 0;
}  
