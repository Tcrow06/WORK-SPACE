#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void them(int A[],int&n);
void xuat(int A[],int n);
void xoa(int A[],int&n);
void sua(int A[],int n);
void timKiem(int A[],int n);
int main()
{
	int n,A[100];
	nhap(A,n);
	them(A,n);
	xuat(A,n);
	xoa(A,n);
	xuat(A,n);
	sua(A,n);
	xuat(A,n);
	timKiem(A,n);
	return 0;
}
void timKiem(int A[],int n)
{
	int so,i=0;
	cout<<"nhap so can tim kiem: ";
	cin>>so;
	A[n]=so;
	while(A[i]!=so)
		i++;
	if(i<n)
		cout<<"so tai vi tri: "<<i;
	else
		cout<<"so khong co trong mang";
		
}
void sua(int A[],int n)
{
	int so,x;
	cout<<"nhap so can sua: ";
	cin>>so;
	cout<<"nhap so can sua thanh so: ";
	cin>>x;
	for(int i=0;i<n;i++)
		if(A[i]==so)
		{
			A[i]=x;
			break;
		}
}
void xoa(int A[],int&n)
{
	int so,vitri;
	cout<<"nhap so can xoa: ";
	cin>>so;
	int i=0;
	while(A[i]!=so)
		i++;
	for(;i<n-1;i++)
		A[i]=A[i+1];
	n--;
}
void nhap(int A[],int&n)
{
	cout<<"nhap so phan tu mang: ";
	cin>>n;
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++)
		cin>>A[i];	
}
void them(int A[],int&n)
{
	int so,vitri;
	cout<<"nhap so can them: ";
	cin>>so;
	cout<<"nhap vitri: ";
	cin>>vitri;
	for(int i=n;i>vitri;i--)
		A[i]=A[i-1];
	A[vitri]=so;
	n++;
}
void xuat(int A[],int n)
{
	cout<<"mang A[]=";
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}




