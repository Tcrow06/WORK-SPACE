#include<bits/stdc++.h>
using namespace std;
void doiHoa(char A[]);
int main()
{
	char A[50];
	gets(A);
	doiHoa(A);
	puts(A);
}
void doiHoa(char A[])
{
	strlwr(A);
	for(int i=0;i<strlen(A);i++)
		if(A[i]==32&&A[i+1]!=32)
			A[i+1]=(char)(A[i+1]-32);
}
