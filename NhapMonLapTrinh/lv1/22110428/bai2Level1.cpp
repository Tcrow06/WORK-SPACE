#include<iostream>
#include<math.h>
using namespace std ;
void nhap (int &n);
void xuat (int n);
int main()
{
    int n;
    nhap (n);
    xuat (n);
    return 0;
}
void nhap(int &n)
{
	cin>>n;
}
void xuat(int n)
{
	cout<<abs(n);
}
