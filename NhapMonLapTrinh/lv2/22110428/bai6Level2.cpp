#include<iostream>                                                                                                               
using namespace std;                                
void nhap(float &x,float&y,float&z);                                
int kiemTra (float x,float y,float z);                                                       
void xuat (int a);                                  
int main()                                      
{                                         
	float x,y,z;
	nhap(x,y,z);                                 
	int a=kiemTra(x,y,z);                            
	xuat (a);
}
void nhap(float &x,float&y,float&z)                                           
{
	cout<<"nhap vao 3 so thuc"<<endl;                                                         
	cin>>x>>y>>z;                      
}                                           
int kiemTra (float x,float y,float z)                                                                   
{                                                           
if (x>0&&y>0&&z>0&&(x+y>z)&&(x+z>y)&&(y+z>x))                                            
{   
	if ((x*x+y*y==z*z)||(x*x+z*z==y*y)||(y*y+z*z==x*x))
	{
		if((x==y)||(x==z)||(y==z))
		  	return 1;
		else 
		 	return 2;
	}	
	else 
		if  ((x==y)||(x==z)||(y==z))                         
		{
			if (x==y&&x==z)            
			 	return 3;
			else 
			 	return 4;
		}
	else  
	 	return 5;
}
else 
 	return 6;
}
void xuat (int a)
{ 
if (a==1) 
	 	cout<<"day la mot tam giac vuong can";
else 
	if (a==2)
	 	cout<<"day la tam giac vuong";
else           
	if	(a==3)                  
		cout<<"day la tam giac deu ";
else 
	if (a==4)              
		cout<<"day la tam giac can";                    
else             
	if(a==5)           
		cout<<"day la tam giac thuong";            
else              
	 cout<<"khong phai la ba canh tam giac";                    
}
