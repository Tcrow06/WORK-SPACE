#include<bits/stdc++.h>
using namespace std;
int n,k;
int tinhGT(int i)
{
	if(i==1)
		return 1;
	else
		return i*tinhGT(i-1);
}
int tinh()
{
	return tinhGT(n)/(tinhGT(k)*tinhGT(n-k));
}
int main()
{
	cin>>n>>k;
	cout<<tinh();
}
