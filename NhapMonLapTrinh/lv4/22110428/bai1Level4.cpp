#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
void xuat(int n);
bool kiemTraSoChinhPhuong(int n);
int main()
{
	int n;
	nhap(n);
	xuat(n);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
void xuat (int n)
{
	if(kiemTraSoChinhPhuong(n))
		cout<<"la so chinh phuong";
	else 
		cout<<"khong phai la so chinh phuong";
}
bool kiemTraSoChinhPhuong(int n)
{
	float m=sqrt(n);
	float t=m-(int)m;
	if (t==0)
		return true;
	else 
		return false;
}
