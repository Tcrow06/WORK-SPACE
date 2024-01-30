#include<iostream>                           
#include<iomanip>            
using namespace std ;              
void nhap (float&a,float&b);                  
float tinhChuVi(float a,float b);
void xuat (float cv);
int main()
{
    float a,b;
    nhap (a,b);
    float cv=tinhChuVi(a,b);
    xuat (cv);
    return 0;
}
void nhap (float&a,float&b )
{
    cout<<"nhap hai canh dai,rong ";
	cin>>a>>b;
}
void xuat (float cv)
{
	if(cv==0)
		cout<<"do dai 2 canh khong hop le ";
	else 
		cout<<"chu vi cua hinh chu nhat la: "<<setprecision(2)<<fixed<<cv;
}
float tinhChuVi(float a,float b)
{
	if(a<=0||b<=0)
		return 0;
	else 
	{
		float k=(a+b)*2;
		return k;
    }
}







