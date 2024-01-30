#include<bits/stdc++.h>
using namespace std;
int check(float x)
{
	int y;
	if(x-(int)x!=0)
	{
		int y=(int)x+1;
		if((y)%2!=0)
			return y;
		else
			return y+1;
	}
	if(x-(int(x)==0))
	{

		if((int)x%2!=0)
			return x;
		else
			return x+1;		
	}
}
int main()
{
	float x;
	cin>>x;
	x=abs(x);
	int d=check(x);
	cout<<d;
	return 0;
	
}
