#include<iostream>
using namespace std;
int tich(int n);
int main()
{
	int n;
	cin>>n;
	int giaiThua=tich(n);
	cout<<giaiThua;
	return 0;
}
int tich(int n)
{
	if(n==1)
		return 1;
	else
		return n*tich(n-1);
}
