#include<iostream>
using namespace std;
struct sp{
	int a;
	int b;
	void nhapSP()
	{
		cin>>a>>b;
	}
	void xuatSP()
	{
		cout<<a<<"+"<<b<<"i";
	}
};
void nhap(sp A[],int&n);
sp tongSP(sp A[],int n);
sp tichSP(sp A[],int n);
int main()
{
	sp A[50];
	int n;
	nhap(A,n);
	sp tong=tongSP(A,n);
	cout<<"tong cac so phuc: ";
	tong.xuatSP();
	sp tich=tichSP(A,n);
	cout<<"\ntich cac so phuc: ";
	tich.xuatSP();
	return 0;
}
void nhap(sp A[],int&n)
{
	cout<<"nhap so luong so phuc: ";
	cin>>n;
	cout<<"nhap phan thuc va phan ao lan luot: \n";
	for(int i=0;i<n;i++)
		A[i].nhapSP();
}
sp tongSP(sp A[],int n)
{
	sp s;
	s.a=0;
	s.b=0;
	for(int i=0;i<n;i++)
	{
		s.a+=A[i].a;
		s.b+=A[i].b;
	}
	return s;

}
sp tichSP(sp A[],int n)
{
	sp t;
	t.a=A[0].a*A[1].a-A[0].b*A[1].b;
	t.b=A[0].a*A[1].b+A[0].b*A[1].a;
	for(int i=2;i<n;i++)
	{
		int x=t.a;
		t.a=t.a*A[i].a-t.b*A[i].b;
		t.b=x*A[i].b+t.b*A[i].a;
	}
	return t;
}







