#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&n);
void lietKeSoChinhPhuong(int n);
bool soChinhPhuong(int i);
void xuat(int i);
int main()
{
	int n;
	nhap(n);
	lietKeSoChinhPhuong(n);
	return 0;
}
void nhap(int&n)
{
	cin>>n;
}
void lietKeSoChinhPhuong(int n)
{
	if(n<5)
		cout<<"khong co so chinh phuong nho hon n";
	else 
	{
		for(int i=4;i<n;i++)
		{
			if(soChinhPhuong(i))
				xuat(i);
		}
	}
}
bool soChinhPhuong(int i)
{
	float m=sqrt(i);
	float t=m-(int)m;
	if (t==0)
		return true;
	else 
		return false;
}
void xuat(int i)
{
	cout<<i<<" ";
}






