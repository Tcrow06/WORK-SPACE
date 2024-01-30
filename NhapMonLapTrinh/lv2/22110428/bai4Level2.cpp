#include<iostream>
using namespace std;
void nhap(int&m,int&y);
int hopLe(int m,int y);
void xuat(int d);
int soNgayTiepTheo(int m);
int laNamNhuan(int y);
int A[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int d,m,y;
	nhap(m,y);
	if(hopLe(m,y))
	{
		d=soNgayTiepTheo(m);
		xuat(d);
	}
	else
		cout<<"khong hop le";
}
void nhap(int&m,int&y)
{
	cout<<"nhap thang,nam"<<endl;
	cin>>m>>y;
}
void xuat(int d)
{
	cout<<"so ngay trong thang nay la "<<d;
}
int hopLe(int m,int y)
{
	if (y>0&&laNamNhuan(y))
		A[2]++;
	if (1<=m&&m<=12&&y>=0)
		return 1;
	else 
		return 0;
}
int soNgayTiepTheo(int m)
{
	int k=A[m];
	return k;
}
int laNamNhuan(int y)
{
	if(y%400==0||(y%4==0&&y%100!=0))
		return 1;
	else 
		return 0;
}
