#include<iostream>
using namespace std;
int n,a[100],cnt,ok;
void ktao()
{
	cnt=1;
	a[1]=n;
}
void sinh()
{
	int i=cnt;
	while(i>=1&&a[i]==1)
		i--;
	if(i==0)
		ok=0;
	else
	{
		a[i]--;
		int d=cnt-i+1;
		cnt=i;
		int p=d%a[i];
		int r=d/a[i];
		if(r)
		{
			for(int j=0;j<r;j++)
			{
				++cnt;
				a[cnt]=a[i];
			}
		}
		if(p)
		{
			++cnt; 
			a[cnt]=p;
		}
	}
}
int main()
{
	cin>>n;
	ktao();
	ok=1;
	while(ok)
	{
		for(int i=1;i<=cnt;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		sinh();
	}
	return 0;
}