#include<iostream>
using namespace std;
void nhap(int&a,int&b,int&c);
void xuat(int k,int min);
int timMin(int a,int b,int c,int&k);
int main()
{
	int a,b,c,k;
	nhap(a,b,c);
	int t=timMin(a,b,c,k);
	xuat(t,k);
	return 0;
}
void nhap(int&a,int&b,int&c)
{
	cout<<"nhap 3 so a,b,c"<<endl;
	cin>>a>>b>>c;
}
void xuat(int t,int k)
{
	if(k==1)
		cout<<"ba so bang nhau";
	else
		cout<<"so nho nhat la: "<<t;
}
int timMin(int a,int b,int c,int&k)
{
	int min=a;
	if(min>b)
		min=b;
	if(min>c)
		min=c;
	if(a==b&&a==c)
		k=1;
	return min;
}




