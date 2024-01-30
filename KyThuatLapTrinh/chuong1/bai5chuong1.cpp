#include<iostream>
using namespace std;
struct soPhuc{
	int phanThuc,phanAo;
	
	void xuat(){
		cout<<phanThuc<<"i+"<<phanAo;
	}
	
	void nhap(){ 
		
		cin>>phanThuc>>phanAo;
	}
	
}; 
void in(soPhuc&a,soPhuc&b);
void nhap(soPhuc&x);
soPhuc tong(soPhuc a,soPhuc b);
soPhuc hieu(soPhuc a,soPhuc b);
soPhuc tich(soPhuc a,soPhuc b);

int main()
{
	soPhuc a,b,s,h,p;
	in(a,b);
	cout<<"tong 2 so phuc tren: ";
	s=tong(a,b);
	s.xuat();
	cout<<"\nhieu 2 so phuc tren : ";
	h=hieu(a,b);
	h.xuat();
	cout<<"\ntich 2 so phuc tren : ";
	p=tich(a,b);
	p.xuat();
	return 0;	
}
void in(soPhuc&a,soPhuc&b)
{
	cout<<"nhap phan thuc va ao cua so phuc thu 1 : ";
	a.nhap();
	cout<<"nhap phan thuc va ao cua so phuc thu 2 : ";
	b.nhap();
}

soPhuc tong(soPhuc a,soPhuc b)
{
	soPhuc s;
	s.phanThuc=a.phanThuc+b.phanThuc;
	s.phanAo=a.phanAo+b.phanAo;
	return s;
}
soPhuc hieu(soPhuc a,soPhuc b)
{
	soPhuc s;
	s.phanThuc=a.phanThuc-b.phanThuc;
	s.phanAo=a.phanAo-b.phanAo;
	return s;
}
soPhuc tich(soPhuc a,soPhuc b)
{
	soPhuc s;
	s.phanThuc=a.phanThuc*b.phanThuc-a.phanAo*b.phanAo;
	s.phanAo=a.phanThuc*b.phanAo+a.phanAo*b.phanThuc;
	return s;
}




