#include<iostream>
using namespace std;
void nhap(int &a,int&b);
int timUCLN(int a,int b,int&k);
void xuat(int s,int k);
int main()
{
	int a,b,k;
	nhap(a,b);
	int s=timUCLN(a,b,k);
	xuat(s,k);
	return 0;
}
void nhap(int&a,int&b)
{
	cout<<"nhap hai so a,b"<<endl;
	cin>>a>>b;
}
void xuat(int s,int k)
{
	if(k==1)
		cout<<"nhap hai so a,b khong hop le";
	else 
		cout<<"UCLN(a,b)="<<s;
}
int timUCLN(int a,int b,int&k)
{
	if(a<=0||b<=0)
		k=1;
	else
	{
		while(a!=b)
		{
			if(a>b)
				a=a-b;
			else
				b=b-a;
		}
		return a;
	}
}







