#include<bits/stdc++.h>
using namespace std;
int n,a[100],b[100];
bool snt(int x)
{
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return x>1;
}
int main()
{
    int n;cin>>n;
    // int X[100]={1};
    vector<int>L(n,1);
    int nb=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(snt(a[i]))
            b[nb++]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
            if(b[i]<b[j])
                L[i]=max(L[i],L[j]+1);
    }
    cout<<*max_element(L.begin(),L.end());
}
