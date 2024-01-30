#include<iostream>
#include<string.h>
#define sls 101
using namespace std;
struct tv{
	string mss;
	string ts;
	string tg;
	int sl;
	void nhap1CS()
	{
		cout<<"nhap ma so sach: ";
		getline(cin,mss);
		cout<<"nhap ten sach: ";
		getline(cin,ts);
		cout<<"nhap ten tac gia: ";
		getline(cin,tg);
		cout<<"nhap so luong sach: ";
		cin>>sl;
		cin.ignore();
	}
	void xuat1CS()
	{
		cout<<"ma so sach: ";
		cout<<mss;
		cout<<"\nten sach: ";
		cout<<ts;
		cout<<"\nten tac gia: ";
		cout<<tg;
		cout<<"\nso luong sach: ";
		cout<<sl;
	}
};
void nhapTT(tv a[],int&n);
void timSach(tv a[],int n);
bool ktraTenSach(string x,string y);
void chuanHoa(string&x);
void tongSoSach(tv a[],int n);
int main()
{
	tv a[sls];
	int n;
	nhapTT(a,n);
	timSach(a,n);
	tongSoSach(a,n);
	return 0;
}
void tongSoSach(tv a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
		s+=a[i].sl;
	cout<<"\n\nso luong sach co trong thu vien: ";
	cout<<s;
}
void timSach(tv a[],int n)
{
	cout<<"\nnhap ten sach can tim: ";
	string x;
	getline(cin,x);
	bool check=false;
	for(int i=0;i<n;i++)
		if(ktraTenSach(a[i].ts,x))
		{
			a[i].xuat1CS();
			check=true;
		}
	if(check==false)
		cout<<"\nkhong tim thay";
}
bool ktraTenSach(string x,string y)
{
	chuanHoa(x);
	chuanHoa(y);
	if(x.size()==y.size())
	{
		for(int i=0;i<x.size();i++)
			if(x[i]!=y[i])
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
void nhapTT(tv a[],int&n)
{
	cout<<"nhap so loai sach: ";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<"\nnhap thong tin loai sach thu "<<i+1<<endl;
		a[i].nhap1CS();
	}
}








