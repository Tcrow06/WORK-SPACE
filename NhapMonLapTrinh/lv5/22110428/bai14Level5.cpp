#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n,int&k);
void xuat(int c);                  
int toHop(int n,int k);
int giaiThua(int x);
int main()          
{                              
	int n,k,c;              
	nhap(n,k);
	c=toHop(n,k);                    
	xuat(c);                    
	return 0;                            
}
void nhap(int &n,int&k)
{
	cout<<"nhap n,k: ";
	cin>>n>>k;
}
void xuat(int c)
{                   
	cout<<"to hop chap k cua n = "<<c;
}
int toHop(int n,int k)               
{
	int C=giaiThua(n)/(giaiThua(k)*giaiThua(n-k));
	return C;
}
int giaiThua(int x)
{
	int t=1;
	for(int i=2;i<=x;i++)
		t=t*i;
	return t;
}




