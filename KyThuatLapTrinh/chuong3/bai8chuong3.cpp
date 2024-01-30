#include<iostream>
using namespace std;
int tim(int a)
{
	int i=1;
	float s=0;
	while(s<=(float)a)
	{
		s+=(float)1/i;
		i++;
	}
	return i-1;
}
int main()
{
	int a;
	cin>>a;
	int n=tim(a);
	cout<<n;
}
