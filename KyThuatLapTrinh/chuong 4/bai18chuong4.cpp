// 0 (
// 1 )
#include<iostream>
using namespace std;
int A[100],m,n;
void nhap();
bool ktraXau();
void lietKeNP(int k);
void xuat();
void ktra();
int main()
{
	nhap();
	lietKeNP(0);
}
void xuat()
{
	for(int i=0;i<m;i++)
	{
		if(A[i]==0)
			cout<<"(";
		else
			cout<<")";
	}
	cout<<endl;
}
void ktra()
{
	if(ktraXau())
		xuat();
}
void lietKeNP(int k)
{
	if(k==m)
		ktra();
	else
		for(int i=0;i<=1;i++)
		{
			A[k]=i;
			lietKeNP(k+1);
		}
}

void nhap()
{
	cin>>m>>n;
}
bool ktraXau()
{
	int ngoacmo=0;
	int dosau=0;
	int i=0;
	while(i<m)
	{
		if(A[i]==0)
			ngoacmo++;
		else
		{
			if(ngoacmo==0)
				return 0;
			if(ngoacmo>dosau)
				dosau=ngoacmo;
			ngoacmo--;
		}
		i++;
	}
	if(ngoacmo==0&&dosau==n)
		return 1;
	else
		return 0;		
}







