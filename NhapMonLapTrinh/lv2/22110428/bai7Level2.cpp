#include<iostream>
#include <math.h>
using namespace std;
void nhap(int&a,int&b,int&c);
void xuat (int k,float x1,float x2);
int timNghiem(int a,int b,int c,float &x1,float&x2);
int main()
{
	int a,b,c;               
	nhap(a,b,c);                    
	float x1,x2;                       
	int k=timNghiem(a,b,c,x1,x2);                
	xuat(k,x1,x2);             
	return 0;            
}
void nhap(int&a,int&b,int&c)                       
{
	cout<<"phuong trinh ax^2+bx+c=0"<<endl;
	cout<<"nhap a,b,c"<<endl;
	cin>>a>>b>>c;
}
void xuat (int k,float x1,float x2)
{
	if(k==1)
		cout<<"phuong trinh vo nghiem";
	else 
		if(k==2)
			cout<<"phuong trinh co nghiem tuy y";
	else 
		if(k==3)
			cout<<"phuong trinh co mot nghiem don x="<<x1;
	else 
		if(k==4)
			cout<<"phuong trinh co nghiem kep x1=x2="<<x1;
	else 
		cout<<"phuong trinh co hai nghiem phan biet x1="<<x1<<"; x2="<<x2;
}
int timNghiem(int a,int b,int c,float &x1,float&x2)
{
    
	if(a==0)
	{
		if(b==0)
		{
		    if(c==0)
			 	return 2;
			else 
				return 1;
	    }
	    else 
		{
			x1=(float)-c/b;
			return 3;
		}
	}
	else 
	{
		float dt = b*b - 4*a*c;
		if(dt<0) 
			return 1;
		else 
			if(dt==0) 
			{ 
				x1=-b/(2*a);
				return 4;
			}	      
		else 
		{
			x1=(-b+sqrt(dt))/(2*a);
			x2=(-b-sqrt(dt))/(2*a);
			return 5;
		}
	}
}






