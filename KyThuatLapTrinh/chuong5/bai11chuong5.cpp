#include<bits/stdc++.h>
using namespace std;
void xuat(int A[],int n);
void sinhTapCon(int n);
int main()
{
	int n;
	cin>>n;
	sinhTapCon(n);
}
void sinhTapCon(int n)
{
	int A[100];
	int i=0;

	xuat(A,i);
	A[0]=0;
	int k=1;
	do{
		xuat(A,k);
		if(A[i]<n-1)
		{
			A[i+1]=A[i]+1;
			i++;
			k++;
		}
		else
		{
			if(i==0)
				break;
			i--;
			k--;
			A[i]++;
		}
		
	}while(true);
}

void xuat(int A[],int n)
{
	cout<<"{";
	for(int i=0;i<n;i++)
		cout<<A[i]<" ";
	cout<<"}";
	cout<<endl;
}
