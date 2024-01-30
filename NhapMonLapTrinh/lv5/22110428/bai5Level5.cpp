#include<iostream>
using namespace std;
void nhap(int&n);
void lietKeCacSoHoanHao(int n);
bool soHoanHao(int i);
void xuat(int i);
int main()
{
	int n;
	nhap(n);
	lietKeCacSoHoanHao(n);
	return 0;
}
void nhap(int&n)
{
	cin>>n;
}
void lietKeCacSoHoanHao(int n)
{
	for(int i=2;i<n;i++)
	{
		if(soHoanHao(i))
			xuat(i);
    }
}
bool soHoanHao(int i)
{
	int t=0;
	for(int j=1;j<i;j++)
	{
		if(i%j==0)
		t=t+j;
	}	
	if (t==i)
		return true;
	else
		return false;
}
void xuat(int i)
{
	cout<<i<<" ";
}


