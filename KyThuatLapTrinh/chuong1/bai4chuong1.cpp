#include<iostream>
#include<math.h>
using namespace std;
struct DATE{
	int ngay,thang,nam;
	void nhap()
	{
		cin>>ngay>>thang>>nam;
	}
};
int in(DATE&a,DATE&b);
int daygrap(DATE a,DATE b);
void xuat(int a);
bool checkDay(DATE x);
bool namNhuan(int y);
int diemNgay(DATE x);
int ngaytrongnam(DATE a);
int A[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	DATE ngay1,ngay2;
	int t=in(ngay1,ngay2);
	if(t==1)
	{
		int x=daygrap(ngay1,ngay2);
		xuat(x);	
	}
}
int in(DATE&a,DATE&b)
{
	cout<<"nhap ngay thang nam 1: ";
	a.nhap();
	cout<<"nhap ngay thang nam 2: ";
	b.nhap();
	if(checkDay(a)==false||checkDay(b)==false)
	{
		cout<<"khong hop le ";
		return 0;
	}
	return 1;
}
void xuat(int a)
{
	cout<<"khoang cach giua hai ngay la : "<<a;
}
bool checkDay(DATE x)
{
	if(namNhuan(x.nam))
		A[2]++;
	if(x.thang>12||x.thang<1||x.ngay>A[x.thang]||x.ngay<1)
		return false;
	return true;
}
bool namNhuan(int y)
{
	if((y%400==0)||(y%4==0||y%100!=0))
		return true;
	return false;
}
int daygrap(DATE a,DATE b){
	
	int kc1=diemNgay(a);
//	cout<<"\n"<<kc1<<endl;
	int kc2=diemNgay(b);
//	cout<<"\n"<<kc2<<endl;
	int kc=abs(kc1-kc2);
	return kc;
}
int diemNgay(DATE x)
{
	int s=0;
	for(int i=0;i<x.nam;i++)
	{
		if(namNhuan(x.nam))
			s+=366;
		else
			s+=365;
	}
	s+=ngaytrongnam(x);
	return s;
}
int ngaytrongnam(DATE a)
{
	int d=a.ngay;
	for(int i=1;i<a.thang;i++)
	{
		d+=A[i];
	}
	return d;
	
}











