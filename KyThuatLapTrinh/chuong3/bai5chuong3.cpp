#include<iostream>
using namespace std;
double tinh(int n)
{
	double s=1,p=1;
	for(int i=1;i<=n;i++)
	{
		p=p/i;
		s+=p;
	}
	double x=s*100;
	if(x-(int)x>0)
	{
		if(x-(int)x>=0.5)
			x=(int)x+1;
		else
			x=(int)x;
	}
	s=x/100;
	return s;
}
int main()
{
	int n;
	cin>>n;
	double s=tinh(n);
	cout<<s;
}
