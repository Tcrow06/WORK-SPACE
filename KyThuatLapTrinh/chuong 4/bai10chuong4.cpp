#include<iostream>
using namespace std;
void nhap(int A[],int&n);
int dem(int A[],int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	int lan=dem(A,n);
	cout<<lan;
	return 0;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int dem(int A[],int n)
{	
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(A[i]>A[j])
			{
				int t=A[i];
				A[i]=A[j];
				A[j]=t;	
			}	
	int ptMax=A[0],pt=A[0],lan=1,lanMax=1;
		
	for(int i=1;i<n;i++)
	{
		if(A[i]==pt)
			lan++;
		else
		{
			if(lan>lanMax)
			{
				ptMax=A[i-1];
				lanMax=lan;
			}
			else
			{
				pt=A[i];
				lan=1;
			}
		}
	}
	return ptMax;
		
}











