#include<iostream>
using namespace std;
void nhap(int&a,int&b);
void xuat(int a,int b);
int main()
{
	int a,b;
	nhap(a,b);
	xuat(a,b);
	return 0;
}
void nhap(int&a,int&b)
{
	cout<<"nhap 2 so a,b"<<endl;
	cin>>a>>b;
}
void xuat(int a,int b)
{
	if(a>b)
		cout<<"so lon nhat la:"<<a;
	else if(b>a)
		cout<<"so lon nhat la: "<<b;
	else 
		cout<<"hai so bang nhau = "<<a;
}
