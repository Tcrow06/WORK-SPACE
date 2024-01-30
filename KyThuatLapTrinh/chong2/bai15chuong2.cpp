#include<iostream>
using namespace std;
void xuat(int A[][100],int n);
void taoMaPhuongLe(int A[][100],int&n);
int main()
{
	int A[100][100],n;
	taoMaPhuongLe(A,n);
	xuat(A,n);
	return 0;
}
void taoMaPhuongLe(int A[][100],int&n)
{
	cout<<"n=";
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			A[i][j]=0;
	int k=1;
	int hang=n-1,cot=n/2;
	for(int i=0;i<n*n;i++)
	{
		if((hang<=n-1)&&(cot<=n-1)&&A[hang][cot]<=0)//thoa dieu kien 
		{
			A[hang][cot]=k++;
			
		}	
		else if((hang>n-1)&&(cot<=n-1))//bi tran hang
		{
			hang=0;
			A[hang][cot]=k++;
			
		}
		else if(cot>n-1&&hang<=n-1)//tran cot
		{
			cot=0;
			A[hang][cot]=k++;	
		}
		else if((hang>n-1&&cot>n-1)||(A[hang][cot]>0))//tran hang va tran cot
		{
			hang=hang-2;
			cot-=1;
			A[hang][cot]=k++;
		}
		hang++;cot++;
	}
} 
void xuat(int A[][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}











