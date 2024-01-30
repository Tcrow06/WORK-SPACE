#include<iostream>
#include<iomanip>
using namespace std;
long double tinh(long long x,long long n)
{
	long double p=1,s=1;
	for(int i=1;i<=n;i++)
	{
		p=p*x/i;
		s+=p;
	}
	return s;
}
int main()
{
	long long x,n;
//	cout<<"nhap n,x: ";
	cin>>n>>x;
	long double s=tinh(x,n);
	cout<<fixed<<setprecision(2)<<s;
}
