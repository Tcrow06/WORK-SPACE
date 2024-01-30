#include<iostream>
using namespace std; 
void tinhVaXuat(int x);
int main()                                            
{                   
	int x;                           
	tinhVaXuat(x);                               
	return 0;              
}               
void tinhVaXuat(int x)                                           
{
	int a,b;
	for(x=10;x<=90;x++)    
	{                      
		a=x%10;                             
		b=x/10;                                       
		if((a*b)==2*(a+b))              
			cout<<x<<" ";                 
	}                           
}               
