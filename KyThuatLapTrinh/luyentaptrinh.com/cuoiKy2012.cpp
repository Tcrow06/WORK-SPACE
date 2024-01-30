#include<bits/stdc++.h>
using namespace std;
void xoapt(char a[],int x)
{
    int n=strlen(a);
    for(int i=x;i<n;i++)
        a[i]=a[i+1];
}
void xoa(char a[])
{
    char A[6]={'A','E','I','O','U'};
    int k=strlen(a);
    for(int i=0;i<k;i++)
        for(int j=0;j<5;j++)
            if(a[i]==A[j])
                {
                	xoapt(a,i);
                	i--;
				}
}
int main()
{
    char a[2000];
    gets(a);
    xoa(a);
    puts(a);
}
