#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	if(x==4)
		x=3;
	if(y==4)
		y=3;
	if(x==8)
		x=4;
	if(y==8)
		y==4;
	int A[4][4]={9,15,7,9,15,10,7,
				10,7,7,7,3,9,10,3,8};
	cout<<A[x-1][y-1];
	return 0;
		
}
