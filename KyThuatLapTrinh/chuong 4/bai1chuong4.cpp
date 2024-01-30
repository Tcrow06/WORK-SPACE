#include<iostream>
using namespace std;
void nhap(int&n);
int timMin(int n);
int A[100]; 
int main()
{
	int n;
	nhap(n);
	int max=timMin(n);
	cout<<max;
}
void nhap(int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int timMin(int n)
{
	if(n==1)
		return A[0];
	else
	{
		int min=timMin(n-1);
		if(A[n-1]<min)
			return A[n-1];
		else
			return min;
	
	}
}
