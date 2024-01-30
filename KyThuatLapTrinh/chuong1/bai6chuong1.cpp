#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	int tu;
	int mau; 
};

void nhap(PhanSo&a);
void xuat(PhanSo a);
void yeuCau(PhanSo a,PhanSo b);
void rg(PhanSo&ps);
int ucln(int a,int b);
void xuatSS(PhanSo a,PhanSo b);
int soSanh(PhanSo a,PhanSo b);
PhanSo sum(PhanSo a,PhanSo b);
PhanSo hieu(PhanSo a,PhanSo b);
PhanSo thuong(PhanSo a,PhanSo b);
PhanSo tich(PhanSo a,PhanSo b);
int main() 
{
	PhanSo a,b;
	cout<<"nhap ps thu nhat: ";
	nhap(a);
	cout<<"nhap phan so thu hai: ";
	nhap (b);
	yeuCau(a,b);
	rg(a);
	cout<<"\nrut gon phan so thu nhat:";
	xuat(a);
	rg(b);
	xuatSS(a,b);
}
void nhap(PhanSo&a)
{
	cin>>a.tu>>a.mau;
}
void xuat(PhanSo a){
	cout<<a.tu<<"/"<<a.mau;
}
void yeuCau(PhanSo a,PhanSo b)
{
	cout<<"tong hai phan so : ";
	xuat(sum(a,b));
	
	cout<<"\nhieu hai phan so : ";
	xuat(hieu(a,b));
	
	cout<<"\ntich hai phan so : ";
	xuat(tich(a,b));
	
	cout<<"\nthuong hai phan so : ";
	xuat(thuong(a,b));
	
}
PhanSo sum(PhanSo a,PhanSo b)
{
	PhanSo sum;
	sum.tu=a.tu*b.mau+b.tu*a.mau;
	sum.mau=a.mau*b.mau;
//	rutgon(s);
	return sum;	
}
PhanSo hieu(PhanSo a,PhanSo b)
{
	PhanSo hi;
	hi.tu=a.tu*b.mau-b.tu*a.mau;
	hi.mau=a.mau*b.mau;
	return hi;
}
PhanSo thuong(PhanSo a,PhanSo b)
{
	PhanSo th;
	if(b.tu!=0)
	{
		th.tu=a.tu*b.mau;
		th.mau=a.mau*b.tu;
		return th;
	}
	
}
PhanSo tich(PhanSo a,PhanSo b)
{
	PhanSo ti;
	ti.tu=a.tu*b.tu;
	ti.mau=a.mau*b.mau;
	return ti;
}
void rg(PhanSo&ps)
{
	int uc;
	if(ps.tu>0)
	{
		uc=ucln(ps.tu,ps.mau);
		ps.tu=ps.tu/uc;
		ps.mau=ps.mau/uc;
	}
}
int ucln(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
void xuatSS(PhanSo a,PhanSo b)
{
	int x=soSanh(a,b);
	if(x==1)
		cout<<"\nphan so thu nhat lon hon";
	else
		if(x==0)
			cout<<"\nhai phan so bang nhau: ";
	else
		cout<<"\nphan so thu hai lon hon";
}
int soSanh(PhanSo a,PhanSo b)
{
	int x=a.tu*b.mau-a.mau*b.tu;
	if(x==0)
		return 0;
	else
		if(x<0)
			return -1;
	else
		return 1;
		
}






