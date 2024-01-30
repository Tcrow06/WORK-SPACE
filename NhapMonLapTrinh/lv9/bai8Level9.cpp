#include<iostream>
using namespace std;
void nhap(int A[],int&n);
void sapxep(int A[],int n);
void demLap(int A[],int n);
int A[100];
int main()
{
	int n;
	nhap(A,n);
	demLap(A,n);

	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}

void sapxep(int A[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(A[i]>A[j])
			{
				int t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
}
void demLap(int A[],int n)
{
	sapxep(A,n);
	for(int i=0;i<n;i++)
	{
		int b=i;
		int dem=1;
		for(int j=i+1;j<n;j++)
			if(A[i]==A[j])
			{
				dem++;
				b++;
			}
		cout<<A[i]<<" xuat hien "<<dem<<" lan"<<endl;
		i=b;
	}		
}
