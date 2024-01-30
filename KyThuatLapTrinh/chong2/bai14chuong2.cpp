#include<iostream>
#define SIZE 100
using namespace std;
void taoBangXoanOc(int A[][SIZE],int n);
void xuat(int A[][SIZE],int n);
int main()
{
	int A[SIZE][SIZE],n;
	cin>>n;
	taoBangXoanOc(A,n);
	xuat(A,n);
	return 0;
}
void taoBangXoanOc(int A[][SIZE],int n)
{
	int i,j,p=0,k=1,cot=n,hang=n;
	while(k<=n*n)
	{
		for(j=p;j<cot;j++)//hang dau tren cung
			{
				A[p][j]=k;
				k++; 
			}
		for(i=p+1;i<hang;i++)// cot ngoai cung
		{
			A[i][cot-1]=k;
			k++;
		}
		for(j=cot-2;j>=p;j--)// hang duoi cung
			{
				A[hang-1][j]=k;
				k++;
			}
		for(i=hang-2;i>p;i--)// cot trong cung
			{
				A[i][p]=k;
				k++;
			}
		cot--;hang--;p++;	
	}
}
void xuat(int A[][SIZE],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}






