#include<iostream>
using namespace std;
int  bat(int n,int i)
{
	return n|(1<<i);
}
int tat(int n,int i)
{
	return n&(~(1<<i));
}
int lay(int n,int i)
{
	return 1&(n>>i);
}
int main()
{
	int n,i;
	cin>>n>>i;
	cout<<bat(n,i)<<endl;
	cout<<tat(n,i)<<endl;
	cout<<lay(n,i)<<endl;
//	tat(n,i);
//	lay(n,i);
}

