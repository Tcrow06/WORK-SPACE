#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int n)
{
    for(int i=0;i<n;i++)
        cin>>A[i];
}
void min(int A[],int n,int&b,int &a)
{
	b=1000;
	int b1;
    for(int i=0;i<n;i++)
        if(A[i]<b)
        {
            b=A[i];
            b1=i;
        }
    a=1000;
    for(int i=0;i<n;i++)
    	if(a>A[i]&&A[i]>=b&&i!=b1)
    		a=A[i];
}
void timucln(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    cout<<a;
}
int main()
{
    int n,a,b;
    cin>>n;
    int A[n];
    nhap(A,n);
    min(A,n,a,b);
    timucln(a,b);
    return 0;
}

