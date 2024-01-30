#include<iostream>
using namespace std;
int y[4]={1,-1,0,0};
int x[4]={0,0,1,-1};
int a[101][101];
int m,n;
bool diemLoi(int e,int h,int c)
{
	for(int i=0;i<4;i++)
	{
		int hang=h+x[i];
		int cot=c+y[i];
		if(hang>=0&&hang<m&&cot>=0&&cot<n)
			if(e<=a[hang][cot])
				return false;
	}
	return true;
}
int main()
{
    cin>>m>>n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    int max=INT_MAX;
    int hang=-1,cot=-1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            if(diemLoi(a[i][j],i,j))
            {
                if(max>a[i][j])
                {
                    max=a[i][j];
                    hang=i;
                    cot=j;
                }
            }
    }
    if(hang==-1)
    	cout<<-1;
    else
    	cout<<hang<<" "<<cot;
    return 0;
}


