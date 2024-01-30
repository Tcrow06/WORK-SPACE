#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&n);
void phanTichSNT(int n);
int main()
{
	int n;
	nhap(n);
	phanTichSNT(n);
	return 0;
}
void nhap(int&n)
{
	cin>>n;
}
void phanTichSNT(int n)
{

	for(int i=2;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			n=n/i;
			cout<<i<<" ";
		}
	}
	if(n!=1)
		cout<<n;
}

