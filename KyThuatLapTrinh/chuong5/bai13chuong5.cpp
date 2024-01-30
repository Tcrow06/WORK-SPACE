#include<iostream>
using namespace std;
int n,a[100],ok,A[100],k;
void ktra()
{
	for(int i=1;i<=n;i++)
		a[i]=0;
} 
 void sinh()
 {
 	int i=n;
 	while(a[i]==1&&i>=1)
 	{
 		a[i]=0;
 		i--;
	 }
 	if(i==0)
 		ok=0;
 	else
 	{
 		a[i]=1;
	}
 }
 void nhap()
 {
 	cin>>n>>k;
 	for(int i=1;i<=n;i++)
 		cin>>A[i];
 }
 bool check()
 {
 	int dem=0;
 	for(int i=1;i<=n;i++)
 		if(a[i]==1)
 			dem++;
 	if(dem==k)
 		return true;
 	else
 		return false;
 }
 int main()
 {
	nhap();
 	ok=1;
 	while(ok)
 	{
 		if(check())
 		{
 			for(int i=1;i<=n;i++)
 				if(a[i]==1)
 					cout<<A[i];
 			cout<<endl;
		}
 		sinh();
	 }
 }
