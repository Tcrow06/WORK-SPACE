#include<iostream>
using namespace std;
void nhap(int &n);
int demUoc(int n,int&k);
void xuat(int d,int k);
int main()
{
	int n,k;
	nhap(n);
	int d=demUoc(n,k);
	xuat(d,k);
	return 0;
}
void nhap(int&n)
{
	cout<<"nhap n=";
	cin>>n;
}
void xuat(int d,int k)
{
	if(k==1)
		cout<<"khong co uoc";
	else 
		cout<<"co "<<d<<" uoc";
}
int demUoc(int n,int&k)
{
		
	if(n<=0)
		k=1;
	else
	{	
		int t=0;
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
				t=t+1;
			
		}
		return t;
	}

}
