#include<iostream>
using namespace std;
int A[100],B[100],n,P[100],pA[100],tgtu=INT_MAX;
void nhap();
void tinhThoiGian();
void lietKeNP(int k);
void xuat();
int main()
{
	nhap();
	lietKeNP(0);
	xuat();
}
void xuat()
{
	cout<<"thoi gian thuc hien: "<<tgtu<<endl;
	for(int i=0;i<n;i++)
		cout<<pA[i]<<" ";
}
void tinhThoiGian()
{
	int ta=0,tb=0;
	for(int i=0;i<n;i++)
	{
		if(P[i]==0)
			ta=ta+A[i];
		else
			tb=tb+B[i];
	}
	int tg=ta;
	if(tg<tb)
		tg=tb;
	if(tg<tgtu)
	{
		tgtu=tg;
		for(int i=0;i<n;i++)
			pA[i]=P[i];
		
	}
//	for(int i=0;i<n;i++)
//		cout<<P[i];
//	cout<<endl;	
}
void nhap()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<n;i++)
		cin>>B[i];
}
void lietKeNP(int k)
{
	if(k==n)
		tinhThoiGian();
	else
		for(int i=0;i<=1;i++)
		{
			P[k]=i;
			lietKeNP(k+1);
		}
}
