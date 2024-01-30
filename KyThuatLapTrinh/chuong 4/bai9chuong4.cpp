#include<iostream>
using namespace std;
int timUCLN(int n);
int UCLN(int x,int y);
void nhap(int&n);
int A[100];
int main()
{
	int n;
	nhap(n);
	int uc=timUCLN(n);
	cout<<uc;	
	return 0;
}
void nhap(int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int timUCLN(int n)
{
	int p=A[0];
	for(int i=1;i<n;i++)
		p=UCLN(A[i],p);
	return p;
}
int UCLN(int x,int y)
{
	if(x*y==0)
		return x+y;
	else
	{
		return(UCLN(y,x%y));
	} 
}
