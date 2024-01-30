#include<iostream>
using namespace std;
struct honSo{
	int n,tu,mau;
	void nhap1()
	{
		cin>>n>>tu>>mau;
	}
	void xuat1()
	{
		cout<<n<<" "<<tu<<"/"<<mau; 
	}
};
struct ps{
	int tu,mau;
	void nhap2()
	{
		cin>>tu>>mau;
	}
	void xuat2()
	{
		cout<<tu<<"/"<<mau; 
	}
};
ps doiHStoPS(honSo a);
void xuatHStoPS(ps s);
honSo congHS(honSo a,honSo b);
ps tongPS(ps x,ps y);
void rutGon(ps&a);
int UCLN(int a,int b);
void xuatTongHS(honSo a);
void xuat(ps a);
honSo tichHS(honSo a,honSo b);
void xuatTichHS(honSo a);
ps tichPS(ps x,ps y);
int main()
{
	honSo a,b,x,y;
	a.nhap1();
	b.nhap1();
	ps s=doiHStoPS(a);
	xuatHStoPS(s);
	x=congHS(a,b);
	xuatTongHS(x);
	y=tichHS(a,b);
	xuatTichHS(y);
	return 0;
} 
void xuatTongHS(honSo a)
{
	cout<<"\ntong hai hon so: ";
	a.xuat1();
}
void xuatTichHS(honSo a)
{
	cout<<"\ntich hai hon so: ";
	a.xuat1();
}
honSo congHS(honSo a,honSo b)
{
	
	ps a1=doiHStoPS(a);
	ps b1=doiHStoPS(b);
	ps tong=tongPS(a1,b1);
	honSo c;
	c.n=tong.tu/tong.mau;
	c.tu=tong.tu%tong.mau;
	c.mau=tong.mau;
	return c;
}
void xuat(ps a)
{
	cout<<"\nphan so: ";
	a.xuat2();
}
honSo tichHS(honSo a,honSo b)
{
	ps a1=doiHStoPS(a);
	ps b1=doiHStoPS(b);
	ps tich=tichPS(a1,b1);
	honSo c;
	c.n=tich.tu/tich.mau;
	c.tu=tich.tu%tich.mau;
	c.mau=tich.mau;
	return c;
}
ps tichPS(ps x,ps y)
{
	ps a;
	a.tu=x.tu*y.tu;
	a.mau=x.mau*y.mau;
	rutGon(a);
	return a;
}
ps tongPS(ps x,ps y)
{
	ps a;
	a.tu=x.tu*y.mau+x.mau*y.tu;
	a.mau=x.mau*y.mau;
	rutGon(a);
	return a;
}
void rutGon(ps&a)
{
	int uc;
	if(a.tu>0)
	uc=UCLN(a.tu,a.mau);
	a.tu=a.tu/uc;
	a.mau=a.mau/uc;
}
int UCLN(int a,int b)
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
void xuatHStoPS(ps s)
{
	cout<<"hon so da chuyen: ";
	s.xuat2();
}
ps doiHStoPS(honSo a)
{
	ps s;
	s.tu=a.n*a.mau+a.tu;
	s.mau=a.mau;
	return s;	
}




