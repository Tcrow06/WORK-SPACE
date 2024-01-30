#include<iostream>
using namespace std ;
void nhap (int &y);
int kiemTra(int y);
void xuat (int y);                           
int main()
{
    int y;
    nhap (y);
    int k=kiemTra(y);
    xuat (k);
    return 0;
}
void nhap(int &n)
{
	cout<<"nhap nam "<<endl;
	cin>>n;
}
void xuat(int k)
{
	if (k==0)
		cout<<"la nam nhuan";
	else if (k==1)
		cout<<"khong phai la nam nhuan";
	else 
		cout<<"nam khong hop le";
}
int kiemTra(int y)
{
	if (y>0&&(y%400==0||(y%4==0&&y%100!=0)))
		return 0;
	else 
		if(y<=0) 
			return 2;
	else 
		return 1;
}		



