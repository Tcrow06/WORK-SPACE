#include<iostream>
#include<math.h>
using namespace std;
void nhap(int&n);
int A[]={1,1};
bool fibonacci(int n);
void xuat(int n);
int main()
{
	int n;
	nhap(n);
	bool fibonacci(n);
	xuat(n);
	return 0;
}
void nhap(int&n)
{
	cin>>n;
}
bool fibonacci(int n)
{
	if(n<=0)
		return false;
	else 
	{
		for(int i=2;i<n;i++)
			A[i]=A[i-1]+A[i-2];             
		return true;
    }
}
void xuat(int n)
{
	if(fibonacci(n)==true)
	{
		cout<<"day fibonacci : "<<endl;
	for(int j=0;j<n;j++)                                		
		cout<<A[j]<<" ";          
	}
	
	else 
		cout<<"khong co day fibonacci";
}




