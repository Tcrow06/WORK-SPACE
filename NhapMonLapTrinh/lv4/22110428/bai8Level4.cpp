#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&n);
bool tangDan(int n);
void xuat(int n);
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
bool tangDan(int n)
{
	
		n=abs(n);
		int soCuoi=n%10;
		n/=10;                   
		int keCuoi;
		while(n>0)
		{
			keCuoi=n%10;
			n/=10;
			if(soCuoi<keCuoi)
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
	if(tangDan(n))
		cout<<"tang dan";
	else 
		cout<<"khong tang dan";
}









