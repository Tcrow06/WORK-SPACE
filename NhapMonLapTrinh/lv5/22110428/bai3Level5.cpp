#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&n);
int demSoNguyenTo(int n);
void xuat(int n);
bool snt(int i);
int main()
{
	int n;
	nhap(n);
	int k=demSoNguyenTo(n);
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
int demSoNguyenTo(int n)
{
	int dem=0;
	for(int i=2;i<n;i++)
	{
		if(snt(i))
			dem++;
    }
    return dem;
}
bool snt(int i)
{
	for(int j=2;j<=sqrt(i);j++)
	{
		if(i%j==0)
			return false;
	}
	return true;
}

