#include<iostream>
using namespace std;        
void nhap(int&a );                          
void xuat(int a);                                                  
int main()
{
	int a;
	nhap(a);             
	xuat(a);                             
	return 0;           
}                       
void nhap(int&a)        
{
	cout<<"nhap so bat ky:"<<endl;                                   
	cin>>a;	                 
}                        
void xuat(int a)
{                  
	if(a==0)
		cout<<"khong";
	else
		if(a==1)
			cout<<"mot";
	else 
		if(a==2)
			cout<<"hai";
	else          
		if(a==3)            
			cout<<"ba";
	else           
		if(a==4)
			cout<<"bon";
	else 
		if(a==5)
			cout<<"nam";
	else 
		if(a==6)
			cout<<"sau";
	else
		if(a==7)
			cout<<"bay";
	else 
		if(a==8)
			cout<<"tam";
	else 
		if(a==9)
			cout<<"chin";
	else 
		cout<<"khong biet viet";
}
