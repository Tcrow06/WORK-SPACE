#include<iostream>
using namespace std;
int n,X[100];
void xuat(int k)
{
	for(int i=1;i<=k;i++)
		cout<<X[i]<<" ";
	cout<<endl;
}
void lietKeTapCon(int vt,int kt);
void lietKeTapCon(int k);
int main()
{
	cin>>n;
	cout<<"rong"<<endl;
	X[0]=0;
	for(int i=1;i<=n;i++)
		lietKeTapCon(1,i);
	return 0;
}
void lietKeTapCon(int vt,int kt)
{
	for(int i=X[vt-1]+1;i<=n;i++)
	{
		X[vt]=i;
		if(vt==kt)
			xuat(vt);
		else
			lietKeTapCon(vt+1,kt);	
	} 
}
