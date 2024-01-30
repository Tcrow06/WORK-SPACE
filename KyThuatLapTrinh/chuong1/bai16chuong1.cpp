#include<iostream>
using namespace std;
struct hang{
	string ms,ten;
	int sl,gia,slt,bh;
	void nhap()
	{
		cin.ignore();
		cout<<"\nnhap ma hang: ";
		getline(cin,ms);
		cout<<"nhap ten hang: ";
		getline(cin,ten);
		cout<<"nhap so luong: ";
		cin>>sl;
		cout<<"nhap don gia: ";
		cin>>gia;
		cout<<"nhap so luong ton: ";
		cin>>slt;
		cout<<"nhap thoi gian bao hanh(thang): ";
		cin>>bh;
	}
	friend ostream& operator << (ostream& out, hang  x)
	{
		out<<"\nma hang: "<<x.ms;
		out<<"\nten hang: "<<x.ten;
		out<<"\nso luong: "<<x.sl;
		out<<"\ndon gia: "<<x.gia;
		out<<"\nso luong ton: "<<x.slt;
		out<<"\nthoi gian bao hanh(thang): "<<x.bh;
	}
};
void nhap(hang a[],int&n);
void timHangTonMax(hang a[],int n);
void timHangTonMin(hang a[],int n);
void timHangCoGiaTienMax(hang a[],int n);
void timHangCoTGBH(hang a[],int n);
void sapXepTon(hang a[],int n);
int main()
{
	hang a[100];
	int n;
	nhap(a,n);
	timHangTonMax(a,n);
	timHangTonMin(a,n);;
	timHangCoGiaTienMax(a,n);
	timHangCoTGBH(a,n);
	sapXepTon(a,n);
}
void sapXepTon(hang a[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].slt>a[j].slt)
			{
				hang tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
	cout<<"\n\ncac mat hang theo thu tu tang dan cua so luong ton: ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;	
}
void timHangCoTGBH(hang a[],int n)
{
	cout<<"\nmat hang thoi gian bao hanh lon hon 12 thang : ";
	for(int i=0;i<n;i++)
		if(a[i].bh>=12)
			cout<<a[i]<<endl;
}
void timHangCoGiaTienMax(hang a[],int n)
{
	int max=a[0].gia;
	for(int i=1;i<n;i++)
		if(max<a[i].gia)
			max=a[i].gia;
	cout<<"\n\nmat hang co gia tien cao nhat: ";
	for(int i=0;i<n;i++)
		if(a[i].gia==max)
			cout<<a[i]<<endl;
}
void timHangTonMin(hang a[],int n)
{
	int min=a[0].slt;
	for(int i=1;i<n;i++)
		if(min>a[i].slt)
			min=a[i].slt;
	cout<<"\n\nmat hang co so luong ton it nhat: ";
	for(int i=0;i<n;i++)
		if(a[i].slt==min)
			cout<<a[i]<<endl;
}
void timHangTonMax(hang a[],int n)
{
	int max=a[0].slt;
	for(int i=1;i<n;i++)
		if(max<a[i].slt)
			max=a[i].slt;
	cout<<"\nmat hang co so luong ton nhieu nhat: ";
	for(int i=0;i<n;i++)
		if(a[i].slt==max)
			cout<<a[i]<<endl;
}
void nhap(hang a[],int&n)
{
	cout<<"\nnhap so luong mat hang: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nthong tin mat hang thu "<<i+1;
		a[i].nhap();
	}
}

















