#include<iostream>
#include<math.h>
using namespace std;
int demsnt(int n);
void xuat(int k);
bool snt(int i);
void nhap(int &n);
int main()
{
	int n;
	nhap (n);
	int k=demsnt(n);
	xuat (k);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
void xuat(int k)                              
{ 
	cout<<"co "<<k<<" so nguyen to";              
}
int demsnt(int n)
{           
	int dem=0;           
	while(n>0)
	{
		int t=n%10;           
		if(snt(t))
			dem++;
		n/=10;	
	}                  
	return dem;
}            
bool snt(int i)
{                 
	if(i<=1)              
		return false;
	else         
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				return false;
		}
		return true;
	}
}

