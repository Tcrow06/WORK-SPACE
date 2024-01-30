#include<iostream>
using namespace std;
struct ntn{
	int ngay,thang,nam;
	void nhap()
	{
		cin>>ngay>>thang>>nam;
	}
	void xuat()
	{
		cout<<ngay<<" "<<thang<<" "<<nam;
	}
};
void ngayTiepTheo(ntn day);
bool kiemTra(ntn day);
bool laNamNhuan(int a);
int A[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	ntn day;
	day.nhap();
	if(kiemTra(day))
	{
		ngayTiepTheo(day);
	}
	else
		cout<<"khong hop le";
	return 0;
}
void ngayTiepTheo(ntn day)
{
	day.ngay++;
	if(day.ngay>A[day.thang])
	{
		day.ngay=1;
		day.thang++;
		if(day.thang>12)
		{
			day.thang=1;
			day.nam++;
		}
	}
	cout<<"ngay tiep theo: ";
	day.xuat();
	
}
bool kiemTra(ntn day)
{
	if(laNamNhuan(day.nam))
		A[2]++;
	if(day.ngay<=0||day.ngay>A[day.thang]||day.thang<=0||day.thang>12||day.nam<=0)
		return false;
	return true;
}
bool laNamNhuan(int a)
{
	if(a%400==0||(a%4==0&&a%100!=0))
		return true;
	return false;
}
	







