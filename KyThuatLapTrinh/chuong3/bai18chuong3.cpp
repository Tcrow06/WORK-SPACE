

//p=n*x*b;
//p=(1*x*10^i) i=0,i=x-1;


#include<iostream>
#include<cstdint>
#include<math.h>
using namespace std;
int timX(int n);
int main()
{
	int n;
	cin>>n;
	int x=timX(n);
	cout<<x;
} 
int timX(int n)
{
	int x=0;
	long long p=0;
	while(p==0||(p%n!=0)||(p/n)%x!=0)
	{
		x++;
		p=0;
		for(int i=0;i<x;i++)
			p=p+x*pow(10,i);
			
	}
	return x;
	
}
