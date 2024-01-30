#include<iostream>
using namespace std;
void nhap(int&a,int&b);
void xuat(float thuong,int d);              
float chia(int a,int b,int&d);                                               
int main()
{
	int a,b,d;
	nhap(a,b);                
	float thuong=chia(a,b,d);
	xuat(thuong ,d);             
	return 0;          
} 
void nhap(int&a,int&b)              
{
	cout<<"nhap vao hai so nguyen a,b "<<endl;
	cin>>a>>b;       
}          
void xuat(float thuong,int d)              
{	
	if(d==1)
		cout<<"khong chia duoc";
	else 
		cout<<thuong;
}
float chia(int a,int b,int&d)
{	
	if(b==0)
		d=1;
	else
	{
		float t=(float)a/b;
		return t;
	}
}

