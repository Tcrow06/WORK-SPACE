#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int chuyen16sang10(char A[]);
int main()
{
	char A[20];
	cin>>A;
	int k=chuyen16sang10(A);
	cout<<k;
	return 0;
}
int chuyen16sang10(char A[])
{
	int n=strlen(A);
	int he10=0;
	for(int i=0;i<n;i++)
	{
		if('A'<=A[i]&&A[i]<='F')
			he10+=(A[i]-55)*pow(16,n-1-i);
		if('0'<=A[i]&&A[i]<='9')
			he10+=(A[i]-'0')*pow(16,n-i-1);
	}
	return he10;
}

