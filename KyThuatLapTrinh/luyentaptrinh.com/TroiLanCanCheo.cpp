#include<iostream>
using namespace std;
int a[100][100],m,n;
bool ctt(int x,int i,int j)
{
	i--;
	j--;
	int e=0;
	while(i>=0&&j>=0&&e<2)
	{
		if(x<=a[i][j])
			return false;
		i--;j--;
		e++;
	}
	return true;
}
bool ctp(int x,int i,int j)
{
	i--;
	j++;
	int e=0;
	while(i>=0&&j<m&&e<2)
	{
		if(x<=a[i][j])
			return false;
		i--;j++;
	}
	return true;
}
bool cdp(int x,int i,int j)
{
	i++;
	j++;
	int e=0;
	while(i<m&&j<n&&e<2)
	{
		if(x<a[i][j])
			return false;
		i++;j++;e++;
	}
	return true;
}
bool cdt(int x,int i,int j)
{
	i++;
	j--;
	int e=0;
	while(i<m&&j>=0&&e<2)
	{
		if(x<=a[i][j])
			return false;
		i++;j--;e++;
	}
	return true;
}
int tinh(int m,int n)
{
	int dem=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(ctt(a[i][j],i,j)&&ctp(a[i][j],i,j)&&cdt(a[i][j],i,j)&&cdp(a[i][j],i,j))
			{
				dem++;
//				cout<<a[i][j]<<endl;
			}
	return dem;
}
int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	cout<<tinh(m,n);
}

//6 5
//3 9 5 6 2
//4 6 8 7 1
//8 11 7 10 3
//4 2 3 5 7
//6 4 1 6 3
//1 7 9 4 5
