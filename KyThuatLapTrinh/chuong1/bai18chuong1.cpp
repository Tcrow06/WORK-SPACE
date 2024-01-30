#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
void taoFile();
int main()
{
	taoFile();
 } 
 void taoFile()
 {
 	fstream output;
 	output.open("SONGUYEN.INP",ios::out|ios::binary);
 	if(output)
 	{
 		int b[32768]={0}; 
		int a[10000];
		int n=10000;
		int d=0;
		srand((unsigned)time(NULL));
		while(d<n)
		{
			int x=rand()%32767+1;
			if(b[x]==0)
			{
				a[d++]=x;
				b[x]=1;
//				cout<<a[d-1]<<" ";
			}
			
		}
		output.write(reinterpret_cast<char* >(&a),sizeof(a));
		output.close();
	}
 }
