#include<iostream>
using namespace std;
int chuyen(int n);
int main()
{
	int n;
	cin>>n;
	int t=chuyen(n); 
	cout<<t;
}
int chuyen(int n)
{
	int na=0;
	int A[100];
	while(n>0)
	{
		A[na++]=n%2;
		n=n/2;
	}
	int dem=0;
	for(int i=na-1;i>=0;i--)
		if(A[i]==1)
			dem++;
	return dem;
}




