#include<iostream>
using namespace std;
void nhap(int&n);
int demCacSoHoanHao(int n);
void xuat(int n);
bool soHoanHao(int i);
int main()
{
	int n;
	nhap(n);
	int k=demCacSoHoanHao(n);
	xuat(k);
	return 0;
}
void nhap(int&n)
{
	cin>>n;
}
void xuat(int k)
{
	cout<<k;
	
}
int demCacSoHoanHao(int n)
{
	int dem=0;
	for(int i=2;i<n;i++)
	{
		if(soHoanHao(i))
			dem++;
    }
    return dem;
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







