#include<iostream>
using namespace std;
void nhap(int&a,int&b);
void xuat(float x,int d);              
float timNghiem(int a,int b,float&x);                                               
int main()
{
	int a,b;
	float x;
	nhap(a,b);                
	int d=timNghiem(a,b,x);
	xuat(x,d);             
	return 0;          
} 
void nhap(int&a,int&b)              
{
	cout<<"phuong trinh ax+b=0"<<endl;
	cout<<"nhap hai so a,b"<<endl;
	cin>>a>>b;       
}          
void xuat(float x,int d)              
{	
	if(d==0)
		cout<<"phuong trinh co nghiem tuy y";
	else 
		if(d==1)
			cout<<"phuong trinh vo nghiem";
	else 
		cout<<"x="<<x;
}
float timNghiem(int a,int b,float&x)
{	
	if(a==0)
		{
			if(b==0)
				return 0;
			else 
				return 1;
		}
	else
	{
		x=(float)-b/a;
		return 2;
	}
}

