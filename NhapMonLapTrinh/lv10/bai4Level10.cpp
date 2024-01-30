#include<bits/stdc++.h>
using namespace std;
int timKyTu(char A[]);
void xuat(int x)
{
	cout<<x;
}
int main()
{
	char A[50];
	gets(A);
	int k=timKyTu(A);
	xuat(k);
}
int timKyTu(char A[])
{
	int dem=0;
	int x=strlen(A);
	for(int i=0;i<x;i++)
	{
		if(('A'<=A[i]&&A[i]<='Z')||('a'<=A[i]&&A[i]<='z'))
			dem++;
	}
	return dem;
}








