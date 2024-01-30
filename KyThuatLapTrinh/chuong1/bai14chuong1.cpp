#include<iostream>
using namespace std;
#define MAX 100
struct mt{
	string lm,nsx;
	int tgbh;
	void nhap1MT()
	{
		cout<<"\nnhap loai may: ";
		getline(cin,lm);
		cout<<"nhap noi san xuat: ";
		getline(cin,nsx);
		cout<<"nhap thoi gian bao hanh(thang): ";
		cin>>tgbh;
		cin.ignore();
	}
};
void nhapTTM(mt a[],int&n);
void thongKe(mt a[],int n);
void timMayMy(mt a[],int n);
bool ktraMy(string x);
void chuanHoa(string&x);
int main()
{
	mt a[MAX];
	int n;
	nhapTTM(a,n);
	thongKe(a,n);
	timMayMy(a,n);
	return 0;
}
void timMayMy(mt a[],int n)
{
	int e=1;
	bool check=false;
	for(int i=0;i<n;i++)
		if(ktraMy(a[i].nsx))
		{
			if(e==1)
			{
				cout<<"\n\ncac may tinh xuat xu tu My: \n";
				e=0;
			}
			cout<<a[i].lm<<endl;
			check=true;
		}
	if(check==false)
		cout<<"\nkhong co loai may tinh xuat xu tu My";
}
bool ktraMy(string x)
{
	chuanHoa(x);
	if(x.size()==2)
	{
		if(x[0]!='m'||x[1]!='y')
			return false;
		return true;
	}
	else
		return false;
}
void chuanHoa(string&x)
{
	while(x[0]==' ')
		x.erase(x.begin()+0);
	while(x[x.size()-1]==' ')
		x.erase(x.begin()+x.size()-1);
	for(int i=0;i<x.size();i++)
	{	
		x[i]=tolower(x[i]);
		if(x[i]==' '&&x[i+1]==' ')
		{
			x.erase(x.begin()+i);
			i--;
		}
	}
}
void thongKe(mt a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i].tgbh==12)
			dem++;
	cout<<"\nso luong may co thoi gian bao hanh 1 nam la: ";
	cout<<dem;
}
void nhapTTM(mt a[],int&n)
{
	cout<<"nhap so luong loai may tinh: ";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<"\nnhap thong tin loai may "<<i+1;
		a[i].nhap1MT();
	}
}

