#include<iostream>
using namespace std ;              
void nhap (int&h,int&m,int&s);                  
int kiemTra(int h,int m,int s);
void xuat (int k);
int main()
{
    int h,m,s;
    nhap (h,m,s);
    int k=kiemTra(h,m,s);
    xuat (k);
    return 0;
}
void nhap (int&h,int&m,int&s)  
{
    cout<<"nhap ba so nguyen h,m,s"<<endl;
	cin>>h>>m>>s;
}
void xuat (int k)
{
	if(k==1)
		cout<<"khong hop le ";
	else 
		cout<<"hop le ";
}
int kiemTra(int h,int m,int s)
{
	if(h<0||h>=24||m<0||m>=60||s<0||s>=60)
		return 1;
	else 
		return 0;
}







