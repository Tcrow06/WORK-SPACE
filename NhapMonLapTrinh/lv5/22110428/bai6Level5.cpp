#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
int demSoChinhPhuong(int n);
bool soChinhPhuong(int i);
void xuat(int k);
int main()
{
	int n;
	nhap(n);
	int k=demSoChinhPhuong(n);
	xuat(k);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int demSoChinhPhuong(int n)
{
	int dem=0;
	for(int i=4;i<n;i++)
	{
		if(soChinhPhuong(i))
			dem++;
	}
	return dem;
	
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
void xuat(int k)
{
	cout<<k;
}

