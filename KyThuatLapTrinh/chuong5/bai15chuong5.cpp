#include<iostream>
using namespace std;
int n,a[100],ok;
void ktao()
{
	for(int i=1;i<=n;i++)
		a[i]=0;
}
void sinh()
{
	int i=n;
	while(i>=1&&a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i==0)
		ok=0;
	else
	{
		a[i]=1;
	}
}
bool check()
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if(a[i]==0&&a[i+1]==1)
		{
			dem++;
			i++;
		}
	if(dem==2)
		return true;
	return false;
}
int main()
{
	cin>>n;
	ok=1;
	while(ok)
	{
		sinh();
		if(check())
		{
			for(int i=1;i<=n;i++)
				cout<<a[i];
			cout<<endl;	
		}
	}
}
