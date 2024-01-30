#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;cin>>x;
    int n;cin>>n;
    double long  s=1;
    double long p=1;
    for(int i=1;i<=n;i++)
    {
        p=p*float(x)/i;
        s+=p;
    }
    cout<<fixed<<setprecision(2)<<s;
}
