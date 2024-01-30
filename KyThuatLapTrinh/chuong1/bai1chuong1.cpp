#include<bits/stdc++.h>
using namespace std;
struct date{
	int ngay,thang,nam;
	void nhapNs(){
		int ng,th,na;
		cin>>ng>>th>>na;
		ngay=ng;
		thang=th;
		nam=na;
	}
	void xuatNs()
	{
		cout<<ngay<<"/"<<thang<<"/"<<nam<<" ";
	}
};
struct sv{
	string mshs;
	string hoten;
	date ns;
	string diachi;
	string phai;
	double diemtb;
	
	void in(){
		cout<<mshs<<" "<<hoten<<" ";
		ns.xuatNs();
		cout<<" "<<diachi<<" "<<phai<<" "<<diemtb<<endl;
	}
		
};
 void xuat(sv a[],int n,int dem);
void nhap(sv a[],int n);
int ktra(sv a[],int n);
int main()
{
	int n;
	cout<<"nhap so luong sinh vien: ";
	cin>>n;
	cin.ignore();
	sv a[n];
	nhap(a,n);
	int dem=ktra(a,n);
	xuat(a,n,dem);
	return 0;
 } 
 void xuat(sv a[],int n,int dem)
 {
 	cout<<"danh sach hoc sinh:\n";
 	for(int i=0;i<n;i++)
 	{
 		cout<<i+1<<".";
		 a[i].in();
	}
	cout<<"\nso hoc sinh duoc len lop : "<<dem;
 }
 void nhap(sv a[],int n)
 {
		for(int i=0;i<n;i++)
		{
			cout<<"nhap mshs "<<i+1<<" : ";
			getline(cin,a[i].mshs);
			cout<<"nhap ho va ten: ";
			getline(cin,a[i].hoten);
			cout<<"nhap ngay sinh: ";
			a[i].ns.nhapNs();
			cin.ignore(1000,'\n');
			cout<<"nhap dia chi: ";
			getline(cin,a[i].diachi);
			cout<<"nhap phai: ";
			getline(cin,a[i].phai);
			cout<<"nhap diem trung binh: ";
			double dt;
			cin>>dt;
			a[i].diemtb=dt;
			cin.ignore();
			cout<<endl;
		}
}

 int ktra(sv a[],int n)
 {
 	int dem=0;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i].diemtb>=5)
 			dem++;
	 }
	 return dem;
 }
 
 
 
 
 
 
 
