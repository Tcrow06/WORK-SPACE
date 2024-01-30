#include<iostream>
#include<math.h>
using namespace std;
struct oxy{
	int x;
	int y;
	void nhap()
	{
		cout<<"nhap toa do: ";
		cin>>x>>y;
	}
	void xuat()
	{
		cout<<x<<" "<<y;
	}
	
};
oxy diemDXquaY(oxy a);
oxy diemDXquaX(oxy a);
oxy diemDXquaTam(oxy a);
float khoangCach(oxy a,oxy b);
void xuatKC(float a);
int main()
{
	oxy a,b;
	cout<<"nhap toa do 1: \n";
	a.nhap();
	oxy a1=diemDXquaY(a);
	cout<<"doi xung qua truc tung: ";
	a1.xuat();
	oxy a2=diemDXquaX(a);
	cout<<"\ndoi xung qua truc hoanh: ";
	a2.xuat();
	oxy a3=diemDXquaTam(a);
	cout<<"\ndoi xung qua tam: ";
	a3.xuat();
	cout<<endl;
	cout<<"\nnhap toa do 2: \n";
	b.nhap();
	float kc=khoangCach(a,b);
	xuatKC(kc);
	return 0;
}
void xuatKC(float a)
{
	cout<<"khoang cach giua 2 diem: ";
	cout<<a;
}
oxy diemDXquaY(oxy a)
{
	oxy a1;
	a1.x=-a.x;
	a1.y=a.y;
	return a1;	
} 
oxy diemDXquaX(oxy a)
{
	oxy a1;
	a1.x=a.x;
	a1.y=-a.y;
	return a1;	
}
oxy diemDXquaTam(oxy a)
{
	oxy a1;
	a1.x=-a.x;
	a1.y=-a.y;
	return a1;	
}
float khoangCach(oxy a,oxy b)
{
	float e=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
	return e;
}







