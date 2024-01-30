#include<iostream>
#include<string.h>
#define e 100
using namespace std;
struct sv{
	string mssv;
	string ten;
	int ns;
	float toan,ly,hoa,dtb;
	void nhap1sv()
	{
		cout<<"\nnhap mssv: ";
		getline(cin,mssv);
		cout<<"nhap ten: ";
		getline(cin,ten);
		cout<<"nhap nam sinh: ";
		cin>>ns;
		cin.ignore();
		cout<<"nhap diem toan,ly,hoa,diem trung binh: ";
		cin>>toan>>ly>>hoa>>dtb;
		cin.ignore();
	}
};
void xuatLop(sv a[],int n);
void nhapLop(sv a[],int&n);
void xuatTen(string a);
void timSVCoDTBCao(sv a[],int n);
void doi(sv&a,sv&b);
void sapTangDanDTB(sv a[],int n);
void sapXepGiamDanDToan(sv a[],int n);
void timVaInLenLop(sv a[],int n);
void timSVOLD(sv a[],int n);
void timSV(sv a[],int n);
void xuatTT(sv a);
void chuanHoa(string&s);
int main()
{
	sv a[e];
	int n;
	nhapLop(a,n);
	cout<<"\ndanh sach thanh vien: \n";
	xuatLop(a,n);
	timSVCoDTBCao(a,n);
	sapTangDanDTB(a,n);
	sapXepGiamDanDToan(a,n);
	timVaInLenLop(a,n);
	timSVOLD(a,n);
	timSV(a,n);
	return 0;
}
void timSV(sv a[],int n)
{	
	string x;
	cout<<"\nnhap ten sinh vien can tim: \n";
	getline(cin,x);
	int i=0;
	bool check=true;
	for(int i=0;i<n;i++)
	{
		if((a[i].ten).compare(x)==0)
		{
			xuatTT(a[i]);
			check=false;
			
		}	
	}
	if(check==true)
	{
		cout<<"khong tim thay: ";	
	}	
}
void chuanHoa(string&s)
{
	while(s[0]==' ')
		s.erase(s.begin()+0);
	while(s.size()-1==' ')
		s.erase(s.begin()+s.size()-1);
	
	for(int i=0;i<s.size();i++)
	{
		s[i]=tolower(s[i]);
		if(s[i]==' '&&s[i+1]==' ')
		{
			s.erase(s.begin()+i);
			i--;
		}
	}
	s[0]=toupper(s[0]);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
			s[i+1]=toupper(s[i+1]);
	}	
}
void xuatTT(sv a)
{
	cout<<a.mssv<<"-"<<a.ten<<"-"<<a.ns<<"-"<<a.toan<<"-"<<a.ly<<"-"<<a.hoa<<"-"<<a.dtb;
}
void timSVOLD(sv a[],int n)
{
	int old=a[0].ns;
	for(int i=1;i<n;i++)
		if(a[i].ns<old)
		{
			old=a[i].ns;
		}	
	cout<<"\nsinh vien co tuoi lon nhat: \n";
	for(int i=0;i<n;i++)
		if(a[i].ns==old)
			xuatTen(a[i].ten);	
	
}
void timVaInLenLop(sv a[],int n)
{
	cout<<"\nds sinh vien co diem trung binh lon hon 5 và khong co mon nao duoi 3: \n";
	for(int i=0;i<n;i++)
		if(a[i].dtb>5&&a[i].toan>=3&&a[i].ly>=3&&a[i].hoa>=3)
			xuatTen(a[i].ten);
}
void sapTangDanDTB(sv a[],int n)
{
	for(int i=0;i<n;i++ )
		for(int j=i+1;j<n;j++)
			if(a[i].dtb>a[j].dtb)
				doi(a[i],a[j]);
	cout<<"\ndanh sach diem trung binh tang dan: \n";
	xuatLop(a,n);				
}
void sapXepGiamDanDToan(sv a[],int n)
{
	for(int i=0;i<n;i++ )
		for(int j=i+1;j<n;j++)
			if(a[i].toan<a[j].toan)
				doi(a[j],a[i]);
	cout<<"\ndanh sach diem toan giam dan: \n";
	xuatLop(a,n);
 } 
void doi(sv&a,sv&b)
{
	sv tam=a;
	a=b;
	b=tam;
}
void xuatLop(sv a[],int n)
{
	for(int i=0;i<n;i++)
		xuatTen(a[i].ten);
}
void timSVCoDTBCao(sv a[],int n)
{
	int max=a[0].dtb;
	for(int i=1;i<n;i++)
		if(max<a[i].dtb)
		{
			max=a[i].dtb;
		}
	cout<<"\nsinh vien co diem trung binh cao nhat:\n";
	for(int i=0;i<n;i++)
		if(a[i].dtb==max)
			xuatTen(a[i].ten);
}
void xuatTen(string a)
{
	cout<<a<<endl;
}
void nhapLop(sv a[],int&n)
{
	cout<<"nhap so luong sinh vien: ";
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<"nhap thong tin sinh thu "<<i+1;
		a[i].nhap1sv();
	}
}







