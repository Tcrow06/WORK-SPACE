#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&n);
void xuat(int n);                   
bool giamDan(int n);             
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
bool giamDan(int n)
{
	n=abs(n);
	int soCuoi=n%10;
	n/=10;	
	int keCuoi;
	while(n>0)
	{
		keCuoi=n%10;
		n/=10;
		if(soCuoi>keCuoi)
		{
			return false;
			break;
		}
		else 
			soCuoi=keCuoi;
	}
}
void xuat(int n)                                         
{
	if(giamDan(n))                      
		cout<<"giam dan";
	else                            
		cout<<"khong giam dan";
	
}









