#include<bits/stdc++.h>
using namespace std;
#define MAX 100

struct PS{
	int tu,mau;
	
	void nhapPS()
	{
		int t;
		cout<<"nhap tu so: ";
		cin>>t;
		tu=t;
		int m;
		cout<<"nhap mau so: ";
		cin>>m;
		while(m==0)
		{
			cout<<"mau so phai khac 0 , nhap lai : ";
			cin>>m;
		}
		mau=m;
	}
	
	void xuatPS()
	{
		cout<<tu<<"/"<<mau;
	}
};
int soSanh(PS a,PS b);
void rutgon(PS&ps);
void xuatMangPS(PS a[],int n);
void nhapMangPS(PS a[],int&n);
int UCLN(int a,int b);
PS cong(PS a,PS b);
PS tong(PS a[],int n);
PS nhan(PS a,PS b);
PS tich(PS a[],int n);
PS nd(PS a);
PS timMax(PS a[],int n);
void nghichDao(PS a[],int n);
int main()
{
	int n;
	PS a[MAX],max,s,p;
	nhapMangPS(a,n);
	cout<<"\n-danh sach cac phan so vua nhap: \n";
	xuatMangPS(a,n);
	max=timMax(a,n);
	cout<<"\n-phan so co gia tri lon nhat : ";
	max.xuatPS();
	s=tong(a,n);
	cout<<"\n-tong cac phan so : ";
	s.xuatPS();
	p=tich(a,n);
	cout<<"\n-tich cac phan so : ";
	p.xuatPS();
	nghichDao(a,n);
	return 0;
	
}
void nhapMangPS(PS a[],int&n)
{
	cout<<"nhap so luong phan so: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"-nhap phan so thu "<<i+1<<":\n";
		a[i].nhapPS();
	}	
}

void xuatMangPS(PS a[],int n)
{
	for(int i=0;i<n;i++)
		{
			a[i].xuatPS();
			cout<<" ";
		}
}

void rutgon(PS&ps)
{
	int uc;
	if(ps.tu>0)
	{	
		uc=UCLN(ps.tu,ps.mau);
		ps.tu=ps.tu/uc;
		ps.mau=ps.mau/uc;
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

int soSanh(PS a,PS b)
{
	if(a.tu*b.mau<b.tu*a.mau)
		return 1;
	else
		return 0;
}
PS timMax(PS a[],int n)
{
	PS max=a[0];
	for(int i=1;i<n;i++)
	{
		if(soSanh(max,a[i])==1)
			max=a[i];
	}
	return max;
}
PS cong(PS a,PS b)
{
	PS s;
	s.tu=a.tu*b.mau+b.tu*a.mau;
	s.mau=a.mau*b.mau;
	rutgon(s);
	return s;
}
PS tong(PS a[],int n)
{
	PS s=a[0];
	for(int i=1;i<n;i++){
		s=cong(s,a[i]);
	}
	rutgon(s);
	return s;
}
PS nhan(PS a,PS b)
{
	PS nhan;
	nhan.tu=1;
	nhan.mau=1;
	nhan.tu=a.tu*b.tu;
	nhan.mau=a.mau*b.mau;
	rutgon(nhan);
	return nhan;
}
PS tich(PS a[],int n)
{
	PS kq=a[0];
	for(int i=1;i<n;i++)
	{
		kq=nhan(kq,a[i]);
	}
	return kq;
}
PS nd(PS a)
{
	PS t;
	t.tu=a.mau;
	t.mau=a.tu;
	return t;
}
void nghichDao(PS a[],int n)
{
	int b=0;
	PS B[n];
	for(int i=0;i<n;i++)
		if(a[i].tu==0)
		{
			B[b].tu=a[i].tu;
			B[b].mau=a[i].mau;
			b++;
			n--;
		}
	if(b!=0)
	{
		cout<<"\n-cac phan so khong the nghich dao: ";
		xuatMangPS(B,b);
	} 
	cout<<"\n-day nghich dao cac phan so trong mang :\n";
	for(int i=0;i<n;i++)
	{
		if(a[i].tu!=0)
		{
			a[i]=nd(a[i]);
			a[i].xuatPS();
			cout<<" ";
		}
	}
			
}
















