#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
#include <algorithm>
using namespace std;
void taoFile();
void sapXep();
int main()
{
	 taoFile();
	 sapXep();
} 
void sapXep()
{
	fstream docFile("SONGUYEN.INP",ios::in|ios::binary);
	if(!docFile)
	{
		cout<<"khong mo duoc file";
		exit(0);
	}
	int n=0;
	int a[10000];
	while(true)
	{
		int b[10];
		docFile.read(reinterpret_cast<char* >(&b),sizeof(b));
		char c;
		docFile.read(reinterpret_cast<char* >(&c),sizeof(c)) ;//dung va xuong dong
		for(int i=0;i<10;i++)
		{
			a[n++]=b[i];
		}
		if(docFile.eof())
			break;
	}
	docFile.close();
	sort(a,a+n);
//	cout<<endl<<endl;
	fstream sX;
	sX.open("SONGUYEN.OUT",ios::out|ios::binary);
	int i=0;
	while(i<n)
	{
		int b[10];
		for(int dem=0;dem<10;dem++)
		{
			b[dem]=a[i++];
			cout<<b[dem]<<" ";
		}
		sX.write(reinterpret_cast<char* >(&b),sizeof(b));
		sX.write("\n",1);
		cout<<endl;
	}
	sX.close();
}
void taoFile()
{
	ofstream output;
	output.open("SONGUYEN.INP",ios::binary);
	if(output)
	{
		int a[10];
		int n=1000;
		srand((unsigned)time(NULL));
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<10;j++)
			{
				a[j]=rand()%10000;
			}
			output.write(reinterpret_cast<char* >(&a),sizeof(a));
			output.write("\n",1);
		}
		output.close();	
	}
}
