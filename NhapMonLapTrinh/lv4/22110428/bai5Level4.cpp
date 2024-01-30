#include<iostream>
using namespace std;
int SLN(int n);
void xuat (int l);
void nhap(int &n);
int main()
{
	int n;
	nhap(n);
	int l=SLN(n);
	xuat (l);
	return 0;
}       
void xuat (int l)               
{
	cout<<"so lon nhat la: "<<l;          
}
void nhap(int &n)
{
	cin>>n;
}
int SLN(int n)                  
{
	int m;
	int k=0;          
	while(n>0)
	{             
		m=n%10;                       
		n/=10;
		if(k<m)                     
			k=m;	
	}
	return k;
}

