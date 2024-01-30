#include<iostream>
using namespace std;
struct lk{
	
	string ten,quyCach,loai;
	int donGia1,donGia2;
	void nhapTT(){
		cout<<"\nten linh kien: ";
		getline(cin,ten);
		cout<<"quy cach: ";
		getline(cin,quyCach);
		cout<<"loai: ";
		cin>>loai;
		if('a'<=loai[0]&&loai[0]<='z')
			loai[0]=toupper(loai[0]);
		cout<<"don gia loai 1: ";
		cin>>donGia1;
		cout<<"don gia loai 2: ";
		cin>>donGia2;
		cin.ignore();
	}
	void xuatTT()
	{
		cout<<"\nten linh kien: "<<ten;
		cout<<"\nquy cach: "<<quyCach;
		cout<<"\nloai: "<<loai;
		
		cout<<"\ndon gia loai 1: "<<donGia1;
		cout<<"\ndon gia loai 2: "<<donGia2;
	}
//	friend ostream& operator << (ostream& out, lk x)
//	{
//		out<<"\nten linh kien: "<<ten;
//		out<<"\nquy cach: "<<quyCach;
//		out<<"\nloai: "<<toupper(loai);
//		out<<"\ndon gia loai 1: "<<donGia1;
//		out<<"\ndon gia loai 2: "<<donGia2;
//		return out;
//	}
};
void nhap(lk a[],int&n);
void sapXepTheoLoai(lk a[],int n);
void sapXepTheoTen(lk a[],int n);
bool ktraTen(string a,string b);
void chuanHoa(string&x);
bool demLK(lk a[],int n);
void ktraLapRap(lk a[],int n);
int main()
{
	lk a[100];
	int n;
	nhap(a,n);
	cout<<"\ndanh sach sap xep theo loai: \n";
	sapXepTheoLoai(a,n); 
	cout<<"\ndanh sach sap xep theo ten: \n";
	sapXepTheoTen(a,n);
	ktraLapRap(a,n);
	
}
void ktraLapRap(lk a[],int n)
{
	if(demLK(a,n))
		cout<<"\n\nYes";
	else
		cout<<"\n\nNo";
}
bool demLK(lk a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i].loai[0]=='A')
			dem++;
	if(dem>=10)
		return true;
	return false;
}
void sapXepTheoTen(lk a[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(ktraTen(a[i].ten,a[j].ten))
			{
				lk tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
	for(int i=0;i<n;i++)
	{
		a[i].xuatTT();
		cout<<endl;	
	}
}
bool ktraTen(string a,string b)
{
	chuanHoa(a);
	chuanHoa(b); 
	for(int i=0;i<a.size()&&i<b.size();i++)
	{	
		if(a[i]>b[i])
			return true;	
	}
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
void sapXepTheoLoai(lk a[],int n)
{
	int e=1;
	
	for(int i=0;i<n;i++)
		if(a[i].loai[0]=='A')
		{
			if(e==1)
			{
				cout<<"\ncac linh lien loai A:";
				e=0;
			}
			a[i].xuatTT();
			cout<<endl;
		}
	e=1;
	for(int i=0;i<n;i++)
		if(a[i].loai[0]=='B')
		{
			if(e==1)
			{
				cout<<"\ncac linh lien loai B:";
				e=0;
			}
			a[i].xuatTT();
			cout<<endl;
		}	
}
void nhap(lk a[],int&n)
{
	cout<<"nhap so loai linh kien: ";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<"\nlinh kien thu "<<i+1;
		a[i].nhapTT();
	}
}





