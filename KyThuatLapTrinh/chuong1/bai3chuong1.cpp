#include<iostream>
#include<math.h>
using namespace std;
struct THOIGIAN{
	int gio,phut,giay;
	void nhap1(){
		cin>>gio>>phut>>giay;
	}
};
bool checkTime(THOIGIAN a);
int nhap(THOIGIAN&time1,THOIGIAN&time2);
THOIGIAN daygrap(THOIGIAN time1,THOIGIAN time2);
void xuat(THOIGIAN a);
int  main(){
	THOIGIAN time1,time2;
	int t=nhap(time1,time2);
	if(t==1){
		THOIGIAN x=daygrap(time1,time2);
		xuat(x);
	}	
}
bool checkTime(THOIGIAN a){
	if(a.gio<0||a.gio>23||a.phut<0||a.phut>59||a.giay<0||a.giay>59)
		return false;
	return true;
}
int nhap(THOIGIAN&time1,THOIGIAN&time2){
	cout<<"nhap gio phut giay 1 : ";
	time1.nhap1();
	cout<<"nhap gio phut giay 2 : ";
	time2.nhap1();
	if(checkTime(time1)==false||checkTime(time2)==false)
	{
		cout<<"khong hop le";
		return 0;
	}
	return 1;		
}
THOIGIAN daygrap(THOIGIAN time1,THOIGIAN time2){
		int s1,s2,s3;
		THOIGIAN a;
		s1=time1.gio*3600+time1.phut*60+time1.giay;
		s2=time2.gio*3600+time2.phut*60+time2.giay;
		s3=abs(s1-s2);
		a.gio=s3/3600;
		s3=s3%3600;
		a.phut=s3/60;
		a.giay=s3%60;
		return a;	
}
void xuat(THOIGIAN a){
	cout<<"khoang cach 2 moc thoi gian tren la : ";
	cout<<a.gio<<" gio "<<a.phut<<" phut "<<a.giay<<" giay";
}





