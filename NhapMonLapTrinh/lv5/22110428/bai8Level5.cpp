#include<iostream>
using namespace std;
void nhap(int&n);
void xuat(int k,int t);
int uocLeLonNhat(int n,int&t);
int main()
{
	int n,t;
	nhap(n);
	int k=uocLeLonNhat(n,t);
	xuat(k,t);
	return 0;
}
void nhap(int&n)
{
	cin>>n;
}
void xuat(int k,int t)
{
	cout<<t;
}
int uocLeLonNhat(int n,int&t)
{

	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2!=0)
				t=i;
		}
	}
}







