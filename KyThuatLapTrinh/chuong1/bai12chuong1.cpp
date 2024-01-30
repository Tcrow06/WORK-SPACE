#include<iostream>
#include<string.h>
using namespace std;
struct video{
	string name;
	string theLoai;
	string daoDien;
	string man;
	string men;
	int namSx;
	string hang;
	void nhap1video()
	{
		cout<<"nhap ten phim: ";
		getline(cin,name);
		cout<<"nhap the loai: ";
		getline(cin,theLoai);
		cout<<"nhap ten dao dien: ";
		getline(cin,daoDien);
		cout<<"nhap ten dien vien nam chinh: ";
		getline(cin,man);
		cout<<"nhap ten dien vien nu chinh: ";
		getline(cin,men);
		cout<<"nhap nam san xuat: ";
		cin>>namSx;
		cin.ignore();
		cout<<"nhap hang san xuat: ";
		getline(cin,hang);
	}
	void xuat1video()
	{
		cout<<name<<"-"<<theLoai<<"-"<<daoDien<<"-"<<man<<"-"<<men<<"-"<<namSx<<"-"<<hang;
		cout<<endl;
	}
};
void xuatNhieuVideo(video a[],int n);
void nhapNhieuVideo(video a[],int&n);
void nhap1video(video&a);
void xuatPhimCanTim(video a[],int n);
bool ktraChuoi(string x,string y);
void chuanHoa(string&s);
void timPhimCuaDienVien(video a[],int n);
void timPhimCuaDaoDien(video a[],int n);
int main()
{
	video a[50];
	int n;
	nhapNhieuVideo(a,n);
//	xuatNhieuVideo(a,n);
	xuatPhimCanTim(a,n);
	timPhimCuaDienVien(a,n);
	timPhimCuaDaoDien(a,n);
}
void timPhimCuaDaoDien(video a[],int n)
{
	string x;
	cout<<"\nnhap ten dao dien can tim: ";
	getline(cin,x);
	int e=1;
	for(int i=0;i<n;i++)
	{
		if(ktraChuoi(a[i].daoDien,x))
		{
			if(e==1)
			{
				cout<<"nhung bo phim do dao dien nay dan dung la: \n";
				e=0;
			}
			cout<<a[i].name<<endl;
		}
	}
	if(e==1)
		cout<<"khong co phim ma dao dien nay dan dung ";
}
void timPhimCuaDienVien(video a[],int n)
{
	string x;
	cout<<"\nnhap ten dien vien nam can tim: ";
	getline(cin,x);
	int e=1;
	for(int i=0;i<n;i++)
	{
		if(ktraChuoi(a[i].man,x))
		{
			if(e==1)
			{
				cout<<"nhung bo phim co dien vien nay dong la: \n";
				e=0;
			}
			cout<<a[i].name<<endl;
		}
	}
	if(e==1)
		cout<<"khong co ten phim ma dien nay dong: ";
}
void xuatPhimCanTim(video a[],int n)
{
	string x;
	cout<<"\nnhap the loai phim can tim: ";
	getline(cin,x);
	int e=1;
	for(int i=0;i<n;i++)
	{
		if(ktraChuoi(a[i].theLoai,x))
		{
			if(e==1)
			{
				cout<<"nhung bo phim thuoc the loai can tim la: \n";
				e=0;
			}
			cout<<a[i].name<<endl;
		}
	}
	if(e==1)
		cout<<"khong co ten phim thuoc the loai can tim: ";

}
bool ktraChuoi(string x,string y)
{
	chuanHoa(x);
	chuanHoa(y);
	if(x.length()==y.length())
	{
		for(int i=0;i<x.size();i++)
			if(y[i]!=x[i])
				return false;
		return true;
	}
	else
		return false;
}
void chuanHoa(string&s)
{
	while(s[0]==' ')
		s.erase(s.begin()+0);
	while(s[s.size()-1]==' ')
		s.erase(s.begin()+s.size()-1);
	for(int i=0;i<s.size();i++)
	{
		s[i]=tolower(s[i]);
		if(s[i]==' '||s[i+1]==' ')
		{
			s.erase(s.begin()+i);
			i--;
		}
	}
}
void nhapNhieuVideo(video a[],int&n)
{
	cout<<"nhap so bo phim: ";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"bo phim "<<i+1<<endl;
		a[i].nhap1video();
	}			
}

void xuatNhieuVideo(video a[],int n)
{
	cout<<"nhung video da nhap: \n";
	for(int i=0;i<n;i++)
		a[i].xuat1video();
}





