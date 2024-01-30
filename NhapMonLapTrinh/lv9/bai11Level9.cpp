#include<iostream>
using namespace std;
void nhap(int A[],int&nA,int B[],int&nB);
void xuat(int k);
int kiemTra(int A[],int nA,int B[],int nB);
int A[1000],B[1000];
int main()
{
	int nA,nB;
	nhap(A,nA,B,nB);
	int k=kiemTra(A,nA,B,nB);
	xuat(k);
	return 0;
} 
void nhap(int A[],int&nA,int B[],int&nB)
{
	cout<<"so luong phan tu mang A: ";
	cin>>nA;
	cout<<"A[]=";
	for(int i=0;i<nA;i++)
		cin>>A[i];
	cout<<"so luong phan tu mang B: ";
	cin>>nB;
	cout<<"B[]=";
	for(int i=0;i<nB;i++)
		cin>>B[i];
}
void xuat(int k)
{ 
	if(k==1)
		cout<<"co";
	else
		cout<<"khong";
}
int kiemTra(int A[],int nA,int B[],int nB)
{
	int dem=0; 
	for(int i=0;i<nA;i++)
		for(int j=0;j<nB;j++)
		{
			if(A[i]==B[j])
				{
					dem++;
					break; 
				}  
		}
	if(dem==nA)
		return 1;
	else 
		return 0;
}







