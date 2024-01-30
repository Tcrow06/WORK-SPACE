#include<bits/stdc++.h>
using namespace std;
struct ps{
	int tu,mau;
	void nhap()
	{
		cin>>tu>>mau;
	}
};
int main()
{
	int n;cin>>n;
	float x;cin>>x;
	ps a[n+1];
	for(int i=0;i<n;i++)
		a[i].nhap();
	float check=INT_MAX;
	int vt;
	for(int i=0;i<n;i++)
	{
		float b=float(a[i].tu/a[i].mau);
		if(abs(b-x)<check)
		{
			check=abs(b-x);
			vt=i;
		}
	}
	cout<<vt;
}
