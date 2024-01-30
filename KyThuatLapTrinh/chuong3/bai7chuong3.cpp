#include<iostream>
using namespace std;
int tinh(int n)
{
	 int x1=0,x2=1,s=0;
	 for(int i=2;i<=n;i++)
	 {
	 	s=x2+x1;
	 	x1=x2;
	 	x2=s;
	 }
	 return s;
}
int main()
{
	int n;
	cin>>n;
	int s=tinh(n);
	cout<<s;
	return n;
}
