#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&n);
void cacSNT(int n);
bool snt(int i);
void xuat(int i);
int main()
{
	int n;
	nhap(n);
	cacSNT(n);
	return 0;
}
void nhap(int&n)
{
	cin>>n;
}
void cacSNT(int n)
{
	if(n<2)
		cout<<"khong co so nguyen to nho hon n";
	else
	{
		for(int i=2;i<n;i++)
		{
			if(snt(i))
				xuat(i);
		}
	}
}
void xuat(int i)
{
	cout<<i<<" ";
}
bool snt(int i)
{
	if(i<=1)
		return false;
	else
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				return false;
		}
		return true;
	}
}
