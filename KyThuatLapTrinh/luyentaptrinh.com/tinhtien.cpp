#include<iostream>
using namespace std;
int main()
{
	int n,a,c,q;
	cin>>n;
	int k=n/100;
	a=n%100;
	int b=a/50;
	c=a%50;
	int e=c/20;
	q=c%20;
	int d=q/10;
	
    if(k!=0)
		cout<<"so to 100 "<<k<<endl;
	if(b!=0)
		cout<<"so to 50 "<<b<<endl;
	if(e!=0)
	
		cout<<"so to 20 "<<e<<endl;
	if(d!=0)
		cout<<"so to 10 "<<d;
}
