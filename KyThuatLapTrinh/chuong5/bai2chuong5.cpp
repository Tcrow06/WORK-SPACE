#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int&n);
int tong(int A[],int n);
bool ams(int x){
	int a[100];
	int na=0;
	int e=x;
	while(x>0)
	{
		a[na++]=x%10;
		x=x/10;
	}
	int s=0;
	for(int i=0;i<na;i++)
	{
		s+=pow(a[i],na);
	}
	if(s==e)
		return true;
		
	return false;
}
int main(){
	int n,A[100];
	nhap(A,n);
	int s=tong(A,n);
	cout<<s;
}
void nhap(int A[],int&n)
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int tong(int A[],int n){
	int s=0;
	for(int i=0;i<n;i++)
		if(ams(A[i]))
		{
			s+=A[i];
		}
	return s;
}
