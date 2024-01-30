#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
void taoFile();
void docFile();
int main()
{
	taoFile();	
	docFile();
} 
void docFile()
{
	fstream input("SONGUYEN.INP",ios::in|ios::binary);
	if(!input)
	{
		cout<<"Khong mo duoc file";
		exit(0);
	}
	int a[100];
	int n=0;
	while(input.good())
	{
		input.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(input.eof())
			break;
	}
	input.close();
//	for(int i=0;i<100;i++)
//		cout<<a[i]<<" ";
	fstream soChan;
	soChan.open("SOCHAN.OUT",ios::out|ios::binary);
	fstream soLe;
	soLe.open("SOLE.OUT",ios::out|ios::binary);
	if(soChan)
	{
		for(int i=0;i<100;i++)
		{	
			if(a[i]%2==0)
				soChan.write(reinterpret_cast<char*>(&a[i]),sizeof(a[i]));
			else
				soLe.write(reinterpret_cast<char*>(&a[i]),sizeof(a[i]));
		}		
		soChan.close();
		soLe.close();
	
	}
}
void taoFile()
{
	fstream output;
	output.open("SONGUYEN.INP",ios::out|ios::binary);
	if(output)
	{
		srand((unsigned)time(NULL));
		int a[100];
		for(int i=0;i<100;i++)
		{
			a[i]=rand()%100;
//			cout<<a[i]<<" ";
		}
		output.write(reinterpret_cast<char* >(&a),sizeof(a));
		output.close();
	}
}
