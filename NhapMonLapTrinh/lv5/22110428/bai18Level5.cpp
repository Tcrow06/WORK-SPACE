#include<iostream>
using namespace std;
void nhap(int&d,int&m,int&y);           
void xuat(int t);             
int hopLe(int d,int m,int y);            
bool laNamNhuan(int y);          
int khoangCachNGay(int d,int m,int y);            
int A[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};                
int main()                 
{                 
	int d,m,y;
	nhap(d,m,y);
	if(hopLe(d,m,y))
	{
		int t=khoangCachNGay(d,m,y);
		xuat(t);
	}
	else 
		cout<<"ngay thang nam khong hop le";           
	return 0;
}            
void nhap(int&d,int&m,int&y)               
{
	cout<<"nhap ngay,thang,nam la luot:"<<endl;       
	cin>>d>>m>>y;	       
}        
void xuat(int t)              
{
	cout<<"so ngay vua nhap den ngay dau tien nam tiep theo la: "<<t;
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
bool laNamNhuan(int y)
{
	if(y%400==0||(y%4==0&&y%100!=0))
		return true;
	else 
		return false;
}
int khoangCachNGay(int d,int m,int y)
{
	int s=A[m]-d+1;
	for(int i=m+1;i<=12;i++)
		s=s+A[i];
	return s;
}



