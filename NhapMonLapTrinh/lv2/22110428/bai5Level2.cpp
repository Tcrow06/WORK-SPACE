#include<iostream>
using namespace std;
void nhap(int&a,int&b,int&c,int&d);
void xuat(int k,int l);
int timSoLonNhat(int a,int b,int c,int d,int&k);
int main()
{
	int a,b,c,d,k;
	nhap(a,b,c,d);
	int l=timSoLonNhat(a,b,c,d,k);
	xuat(k,l);
	return 0;
}
void nhap(int&a,int&b,int&c,int&d)
{
	cout<<"nhap 4 so a,b,c,d"<<endl;
	cin>>a>>b>>c>>d;
}
void xuat(int k,int l)
{
	if(k==1)
		cout<<"4 so bang nhau";
	else
		cout<<"so lon nhat la: "<<l;
}
int timSoLonNhat(int a,int b,int c,int d,int&k)
{
	int max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	if(max<d)
		max=d;		
	if(a==b&&a==c&&a==d)
		k=1;
	return max;
}

