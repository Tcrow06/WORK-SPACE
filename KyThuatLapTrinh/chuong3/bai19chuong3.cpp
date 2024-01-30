#include<iostream>
using namespace std;
long double tinh(int n)
{
	long double s=1;
	for(int i=1;i<=n;i++)
		s=s*(1+(float)1/(i*i));
	return s;
}
int main()
{
	int n;
	cin>>n;
	long double s=tinh(n);
	cout<<s;
}
