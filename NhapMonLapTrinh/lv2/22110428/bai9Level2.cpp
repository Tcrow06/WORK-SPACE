#include<iostream>
using namespace std;
void nhap(int&a,int&b,int&c);
void xuat(int so,int d);
int soSanh(int a,int b,int c,int&d);
int main()
{
	int a,b,c,d;
	nhap(a,b,c);
	int so=soSanh(a,b,c,d);
	xuat(so,d);
	return 0;
}
void nhap(int&a,int&b,int&c)
{
	cout<<"nhap 3 so a ,b,c"<<endl;
	cin>>a>>b>>c;
}
void xuat(int so,int d)
{
	if (d==1)
		cout<<"khong the tim so nho nhi";
	else
		cout<<"so nho nhi la: "<<so;

}
int soSanh(int a,int b,int c,int&d)
{
	if(a==b||a==c||c==b)
		d=1;
	else if((b<a&&a<c)||(b>a&&a>c))
		return a;
	else if ((a<b&&b<c)||(a>b&&b>c))
		return b;
	else 
		return c;
}
