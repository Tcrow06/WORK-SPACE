#include<iostream>
using namespace std;
void nhap(int &n);
int tongCacGiaiThua(int n);
void xuat(int s);
int giaiThua(int x);
int main()
{
	int n;
	nhap(n);
	int s=tongCacGiaiThua(n);
	xuat(s);
	return 0;
}
void nhap(int &n)
{
	cin>>n;                                         
}
void xuat(int s)
{
	cout<<s;
}
int tongCacGiaiThua(int n)
{
	int k=0;
	for(int i=1;i<=n;i++)
	{
		k=k+giaiThua(i);	
	}
	return k;
}
int giaiThua(int x)
{
	int t=1;
	for(int i=1;i<=x;i++)
		t=t*i;
	return t;
}



