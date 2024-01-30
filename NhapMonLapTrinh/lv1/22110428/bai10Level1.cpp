#include <iostream>                                              
using namespace std;
void nhap (float&a );                                           
int tinhSoNguyenLonNhat(float a);
void xuat (int n);                                                                     
int main()                      
{ 
	float a;
	nhap (a);
	int n=tinhSoNguyenLonNhat(a);
	xuat (n);
	return 0;
}
void nhap(float&a )
{
    cin>>a;
}
int tinhSoNguyenLonNhat(float a)
{
	int k=a;
	float t=a-k;
	if(t>0)
		return k;
	else
		return k-1;
}
void xuat (int n)
{
    cout<<n;
}
