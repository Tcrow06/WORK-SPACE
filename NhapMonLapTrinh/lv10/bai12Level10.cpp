#include<iostream>
using namespace std;
void nhap(int A[][50],int&m,int&n);
void tinhTong(int A[][50],int m,int n);
int main()
{
	int m,n;
	int A[50][50];
	nhap(A,m,n);
	tinhTong(A,m,n);
	return 0;
}
void nhap(int A[][50],int&m,int&n)
{
	cout<<"nhap dong: ";
	cin>>m;
	cout<<"nhap cot: ";
	cin>>n;
	cout<<"nhap ma tran:"<<endl;;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
}
void tinhTong(int A[][50],int m,int n)
{
	int b=0;
	int a=0;
	int s1,s2;
	while(a<m)
	{
		for(int i=0;i<n;i++)
			s1+=A[a][i];
		cout<<"tong dong "<<a+1<<" = "<<s1<<endl;;
		a++;
		s1=0;
	}
	while(b<n)
	{
		for(int i=0;i<m;i++)
			s2+=A[i][b];
		cout<<"tong cot "<<b+1<<" = "<<s2<<endl;;
		b++;
		s2=0;
	}	
	int chinh=0;
	int phu=0;
	for(int i=0;i<n;i++)
	{
		chinh+=A[i][i];
		phu+=A[i][n-1-i];
	}
	cout<<"tong duong cheo chinh ="<<chinh<<endl;
	cout<<"tong duong cheo phu ="<<phu<<endl;			
}







