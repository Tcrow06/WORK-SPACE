#include<iostream>
using namespace std;
void nhap(int&n);
void xuat(int n);
bool doiXung(int n);
int main()
{
	int n;
	nhap(n);              
	xuat(n);       
	return 0;
}                     
void nhap(int&n)
{
	cin>>n;                                              
}
bool doiXung(int n)                
{
	int k=0;
	int tam=n;
	while(n>0)            
	{
		int m=n%10;           
		n/=10;          
		k=k*10+m;
	}
	if (k==tam)
		return true;
	return false;
}
void xuat(int n)                       
{
	if (doiXung(n))       
		cout<<"la so doi xung";          
	else 
		cout<<"khong phai la so doi xung";
}
