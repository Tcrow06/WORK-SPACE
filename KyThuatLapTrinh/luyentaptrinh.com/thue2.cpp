#include<bits/stdc++.h>
using namespace std;
void tinhThue(long long n);
int main()
{
	int n;
	cin>>n;
	tinhThue(n);
	return 0; 
}
void tinhThue(long long n)
{
	long long thue=0;
	int so=pow(10,6);
	if(n<=5*so)
		thue=n*5/100;
	if(5*so<n&&n<=10)
		thue=0.25*so+(n-5*so)*10/100;
	if(10*so<n&&n<=18*so)
		thue=0.75*so+(n-10*so)*15/100;
	if(18*so<n&&n<=32*so)
		thue=1.95*so+(n-18*so)*20/100;
	if(32*so<n&&n<=52*so)
		thue=4.75*so+(n-32*so)*25/100;
	if(52*so<n&&n<=80*so)
		thue=9.75*so+(n-52*so)*30/100;
	if(80*so<n)
		thue=18.15*so+(n-80*so)*35/100;
	cout<<thue*12;
	
}








