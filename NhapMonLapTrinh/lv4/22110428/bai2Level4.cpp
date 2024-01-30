#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
void xuat (int n);
bool snt(int i);
int main()
{
	int n;
	nhap(n);
	xuat(n);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
void xuat (int n)
{
	if(snt(n))
		cout<<"la so nguyen to";
	else 
		cout<<"khong phai la so nguyen to";
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




