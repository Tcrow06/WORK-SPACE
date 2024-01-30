#include<iostream>
using namespace std ;
void nhap (int &a,int &b );
int tong(int a,int b);
void xuat (int t);
int main()
{
    int a,b;
    nhap (a,b);
    int t=tong(a,b);
    xuat (t);
    return 0;
}
void nhap (int &a,int &b )
{
    cout<<"nhap a,b"<<endl;
	cin>>a>>b;
}
int tong(int a,int b)
{
    int t=a+b;
    return t;
}
void xuat (int t)
{
    cout<<"tong a+b= "<<t;
}
