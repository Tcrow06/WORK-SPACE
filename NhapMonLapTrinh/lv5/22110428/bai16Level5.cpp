#include<iostream>
using namespace std;
void nhap(int&n);
void xuat(int t1,int t2,int t3,int t4);
void tinh(int n,int&t1,int&t2,int&t3,int&t4);
int main()
{
	int n,t1,t2,t3,t4;
	nhap(n);
	tinh(n,t1,t2,t3,t4);
	xuat(t1,t2,t3,t4);
	return 0;
}
void nhap(int&n)
{
	cin>>n;                   
}                 
void xuat(int t1,int t2,int t3,int t4)                 
{
	if(t1>0)              
		cout<<"to 100: "<<t1<<endl;              
	if(t2>0)
		cout<<"to 50: "<<t2<<endl;
	if(t3>0)
		cout<<"to 20: "<<t3<<endl;               
	if(t4>0)
		cout<<"to 10: "<<t4<<endl;
}
void tinh(int n,int&t1,int&t2,int&t3,int&t4)
{                     
	t1=n/100000;
	int n1=n%100000;                                
	t2=n1/50000;
	int n2=n1%50000;                
	t3=n2/20000;
	int n3=n2%20000;
	t4=n3/10000;	
}             
                  
             
                       










