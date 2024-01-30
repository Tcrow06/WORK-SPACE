#include<iostream>
using namespace std ;              
void nhap (float&a,float&b,float&c);                  
int kiemTra(float a,float b,float c);
void xuat (int k);
int main()
{
    float a,b,c;
    nhap (a,b,c);
    int k=kiemTra(a,b,c);
    xuat (k);
    return 0;
}
void nhap (float&a,float&b,float&c )
{
    cout<<"nhap 3 so thuc"<<endl;
	cin>>a>>b>>c;
}
void xuat (int k)
{
	if(k==0)
		cout<<"la ba canh cua mot tam giac";
	else 
		cout<<"khong phai la ba canh tam giac";
}
int kiemTra(float a,float b,float c)
{
	if(a>0&&b>0&&c>0&&(a+b>c)&&(a+c>b)&&(b+c>a))
		return 0;
	else 
		return 1;
}









