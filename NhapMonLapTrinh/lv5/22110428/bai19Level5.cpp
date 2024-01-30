#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&d,int&m,int&y);
void xuat(int t);
int hopLe(int d,int m,int y);
bool laNamNhuan(int y);
int khoangCachGiua2Ngay(int d1,int m1,int y1,int d2,int m2,int y2);
int demNgay(int d,int m,int y);              
int ngayThuTrongNam(int d,int m,int y);
int A[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};                       
int main()
{
	int d1,d2,m1,m2,y1,y2;              
	nhap(d1,m1,y1);
	nhap(d2,m2,y2);                                     
	if(hopLe(d1,m1,y1))             
	{                            
		if(hopLe(d2,m2,y2))                 
		{          
			int t=khoangCachGiua2Ngay(d1,m1,y1,d2,m2,y2);          
			xuat(t);
		}                   
	}
	else 
		cout<<"ngay thang nam khong hop le";
	return 0;
}
void nhap(int&d,int&m,int&y)            
{                   
	cout<<"nhap ngay,thang,nam :"<<endl;                 
	cin>>d>>m>>y;	
}              
void xuat(int t)
{
	cout<<t;
}
int hopLe(int d,int m,int y)
{
	if(y>0&&laNamNhuan(y))
		A[2]++;
	if(A[m]>=0&&d<=A[m]&&m>0&&m<12&&y>0)
		return 1;
	else 
		return 0;	
}
int demNgay(int d,int m,int y)
{
	int s=0;
	int kc;
	for(int i=1;i<y;i++)
	{
		if(laNamNhuan(i))
			s+=366;
		else
			s+=365;
	}
	kc=s+ngayThuTrongNam(d,m,y);
	return kc;
}
int ngayThuTrongNam(int d,int m,int y)
{
	int s=d;
	for(int i=1;i<=m-1;i++)
	{
		s=s+A[i];	
	}
	return s;
}
int khoangCachGiua2Ngay(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int kc1=demNgay(d1,m1,y1);
	int kc2=demNgay(d2,m2,y2);
	int k=abs(kc1-kc2);
	return k;
}
bool laNamNhuan(int y)
{
	if(y%400==0||(y%4==0&&y%100!=0))
		return true;
	else 
		return false;
}







