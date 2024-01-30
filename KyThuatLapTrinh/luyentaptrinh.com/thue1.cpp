#include<bits/stdc++.h>
using namespace std;
int tinhThue(double n);
int main()
{
	double n;
	cin>>n;
	tinhThue(n);
	return 0; 
}
int tinhThue(double n)
{
	int so=pow(10,6);
    double n1=(n-5*so);
    double n2=(n-10*so);
    double n3=(n-18*so);
    double n4=(n-32*so);
    double n5=(n-52*so);
    double n6=(n-80*so);
	double thue=0;
	if(n<=5*so)
		thue=n*5/100;
	else if(5*so<n&&n<=10)
		thue=0.25*so+n1*10/100;
	else if(10*so<n&&n<=18*so)
		thue=0.75*so+n2*15/100;
	else if(18*so<n&&n<=32*so)
		thue=1.95*so+n3*20/100;
	else if(32*so<n&&n<=52*so)
		thue=4.75*so+n4*25/100;
	else if(52*so<n&&n<=80*so)
		thue=9.75*so+n5*30/100;
	else if(80*so<n)
		thue=18.15*so+n6*35/100;
	cout<<fixed<<setprecision(0)<<thue;
}








