#include<iostream>
using namespace std;
void nhap(int&n);
int tong(int n);
int A[100];
int main()
{
	int n;
	nhap(n);
	int sum=tong(n);
	cout<<sum;
}
void nhap(int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int tong(int n)
{
	if(n==1)
		return A[0];
	else
	{
		return A[n-1]+tong(n-1);
		
	}
}





