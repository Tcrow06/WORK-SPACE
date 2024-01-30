#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int timSoGanh(int A[],int n);
bool soGanh(int i);
void xuat(int k);
int A[10000];
int main()
{
	int n;
	nhap(A,n);
	int k=timSoGanh(A,n);
	xuat(k);
	return 0;
}
void nhap(int A[],int&n)
{
	cout<<"so luong phan tu mang n=";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int timSoGanh(int A[],int n)
{
	for(int i=0;i<n;i++)
		if(soGanh(A[i]))
			return A[i];
	return 0;
}
void xuat(int k)
{
	if(k==0)
		cout<<"khong co so ganh";
	else
		cout<<k;
}
bool soGanh(int i)
{
	if(i<10)
		return false;
	else
	
	{
		int tam=i;
		int a;
		int b=0;
		while(i>0)
		{			
			a=i%10;
			b=10*b+a;
			i=i/10;
		}
		if(tam==b)
			return true;
		else
			return false;
	}
}



