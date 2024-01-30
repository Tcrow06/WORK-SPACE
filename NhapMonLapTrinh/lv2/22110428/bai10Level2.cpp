#include<iostream>
using namespace std;               
void nhap(int&h,int&m,int&s);         
void tinhGioTiepTheo(int&h,int&m,int&s);
void xuat(int h,int m,int s);
int main()
{
	int h,m,s;
	nhap (h,m,s);
	tinhGioTiepTheo(h,m,s);
	xuat(h,m,s);
	return 0;
}
void nhap(int&h,int&m,int&s)
{
	cout<<"nhap gio,phut,giay"<<endl;
	cin>>h>>m>>s;
	while(h<0||h>=24||m<0||m>=60||s<0||s>=60)
	{
		cout<<"gio,phut,giay khong hop le"<<endl<<"nhap lai"<<endl;
		cin>>h>>m>>s;
	}
}
void tinhGioTiepTheo(int&h,int&m,int&s)
{
	s++;
	if(s>59)
	{
		s=0;
		m++;
		if(m>59)
		{
			m=0;
			h++;
			if(h>=23)				
				h=0;
		}
	}
}
void xuat(int h,int m,int s)
{
	cout<<"sau do mot giay la:"<<endl;
	cout<<h<<" gio "<<m<<" phut "<<s<<" giay ";
}



