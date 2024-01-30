#include<iostream>
# define sl 100
using namespace std;
struct ps{
	int tu,mau;
	void nhap()
	{
		cin>>tu>>mau;
	}
	void xuat()
	{
		cout<<tu<<"/"<<mau<<" ";
	}
};
void nhapMang(ps A[],int&n);
void nhapPS(ps&a);
ps tong(ps A[],int n);
ps cong(ps a,ps b);
void rutgon(ps&a);
int UCLN(int a,int b);
void xuatTong(ps s);
void timMinMax(ps A[],int n,ps&min,ps&max);
int soSanh(ps a,ps b);
void xuatMinMax(ps min,ps max);
void sapXep(ps A[],int n);
void xuatMang(ps A[],int n);
int main()
{
	ps A[sl],min,max;
	int n;
	nhapMang(A,n);
	ps s=tong(A,n);
	xuatTong(s);
	timMinMax(A,n,min,max);
	xuatMinMax(min,max);
	sapXep(A,n);
	xuatMang(A,n);
	return 0;
	
}
void sapXep(ps A[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(soSanh(A[j],A[i]))
			{
				ps tmp=A[i];
				A[i]=A[j];
				A[j]=tmp;
			}
}
void xuatMang(ps A[],int n)
{
	cout<<"\nmang tang dan: ";
	for(int i=0;i<n;i++)
		A[i].xuat();
}
void xuatMinMax(ps min,ps max)
{
	cout<<"\nso lon nhat: ";
	max.xuat();
	cout<<"\nso nho nhat: ";
	min.xuat();
}
void timMinMax(ps A[],int n,ps&min,ps&max)
{
	min=A[0];
	max=A[0];
	for(int i=0;i<n;i++)
	{
		if(soSanh(A[i],min))
			min=A[i];
		if(soSanh(max,A[i]))
			max=A[i];
	}
}
int soSanh(ps a,ps b)
{
	if(a.tu*b.mau<b.tu*a.mau)
		return 1;
	else
		return 0;
}
void nhapMang(ps A[],int&n)
{
	cout<<"nhap so luong phan so: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"-nhap phan so thu "<<i+1<<": \n";
		nhapPS(A[i]);
	}
}
void nhapPS(ps&a)
{
	int t;
	cout<<"nhap tu so: ";
	cin>>t;
	a.tu=t;
	int m;
	cout<<"nhap mau so: ";
	cin>>m;
	while(m==0)
	{
		cout<<"mau so phai khac 0 , nhap lai : ";
		cin>>m;
	}
	a.mau=m;
}
ps tong(ps A[],int n)
{
	ps s=A[0];
	for(int i=1;i<n;i++){
		s=cong(s,A[i]);
	}
	rutgon(s);
	return s;
}
ps cong(ps a,ps b)
{
	ps s;
	s.tu=a.tu*b.mau+b.tu*a.mau;
	s.mau=a.mau*b.mau;
	return s;
}
void rutgon(ps&a)
{
	int uc;
	if(a.tu>0)
	{
		uc=UCLN(a.tu,a.mau);
		a.tu=a.tu/uc;
		a.mau=a.mau/uc;
	}
}
int UCLN(int a,int b)
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
void xuatTong(ps s)
{
	cout<<"tong cac phan so: ";
	if(s.tu==0)
		cout<<0;
	else
		if(s.tu==s.mau)
			cout<<1;
	else
		s.xuat();
}




















