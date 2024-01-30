#include<iostream>
#include<cstdint>
using namespace std;
void nhap(int &n);
long long tong(int n);
int main()
{
	int n;
	long long s;
	nhap(n);
	s=tong(n);
	cout<<s;
	return 0;
	
}
void nhap(int &n)
{
//	cout<<"nhap n: ";
	cin>>n;
}
long long tong(int n)
{
	long long s=0;
	for(int i=1;i<=n;i++)
		s+=i*(i+1)/2;
	return s;
}
