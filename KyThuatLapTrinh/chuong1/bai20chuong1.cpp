#include<iostream>
#include<fstream>
using namespace std;
void taoFile();
void docFile();
int main()
{
	taoFile();
	docFile();
}
void taoFile()
{
	fstream output;
	output.open("SOCHAN.DAT",ios::out);
	int i=0;
	while(i<=100)
	{
		output<<i<<" ";
		i+=2;
	}
	output.close();
}
void docFile()
{
	fstream input("SOCHAN.DAT",ios::in);
	if(!input)
	{
		cout<<"Khong mo duoc file";
		exit(0);
	}
	int n=0;
	while(true)
	{
		int x;
		input>>x;
		cout<<x<<" ";
		n++;
		if(input.eof())
			break;
		if(n%30==0)
			cout<<endl;
	}
	input.close();
}
