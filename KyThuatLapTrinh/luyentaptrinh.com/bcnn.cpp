#include<bits/stdc++.h>
using namespace std;
void bcnn(float x,float y)
{
	int x1=x;
	int y1=y;
	int bc=x1*y1;
	while(x1!=y1)
	{
		if(x1>y1)
			x1-=y1;
		else
			y1-=x1;
	}
	cout<<bc/x1;
	
}
int main()
{
	float x,y;
	cin>>x>>y;
	bcnn(x,y);
	return 0;
}
