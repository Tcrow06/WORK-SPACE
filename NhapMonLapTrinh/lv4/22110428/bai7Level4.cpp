#include<iostream>
using namespace std;                    
void kiemTraSC(int n,int&k);
void xuat(int k);
void nhap(int&n);         
int main()              
{                             
	int n,k;
	nhap (n); 
	kiemTraSC(n,k);                         
	xuat (k);                                        
	return 0;                    
}
void xuat(int k)
{
	if(k==1)                              
		cout<<"tat ca la so chan ";
	else
		cout<<"tat ca khong phai la so chan ";
}
void nhap(int&n)
{
	cin>>n;
}
void kiemTraSC(int n,int&k)
{                      
	k=1;
	while(n>0)
	{
		int t=n%10;                                  
		if(t%2==1)             
		{
			k=0;
			break;                                    
		}
		n/=10;                     
	} 		
}






