#include<iostream>
using namespace std;
void nhap(int &n);
void xuat (int n);
bool kiemTraSoHoanHao(int n);
int main()
{
	int n;
	nhap(n);
	xuat(n);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
void xuat (int n)
{
	if (kiemTraSoHoanHao(n))
		cout<<"la so hoan hao";
	else 
		cout<<"khong phai la so hoan hao";
}
bool kiemTraSoHoanHao(int n)
{
	int t=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		t=t+i;
	}	
	if (t==n)
		return true;
	else
		return false;
}





		
		
		
		
		

