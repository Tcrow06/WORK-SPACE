#include<bits/stdc++.h>
using namespace std;
void tinhThue(int n);
int main()
{
	int n;
	cin>>n;
	tinhThue(n);
	return 0; 
}
void tinhThue(int n)
{
	int so=pow(10,5);
	int n1=n-50*so;
	int thue=0;
	if(n1>0)
	{
		thue+=2,5*so;
		int n2=n1-50*so;
		if(n2>0)
		{
			thue+=5*so;
			int n3=n2-80*so;
			if(n3>0)
			{
				thue+=12*so;
				int n4=n3-140*so;
				if(n4>0)
				{
					thue+=28*so;
					int n5=n4-200*so;
					if(n5>0)
					{
						thue+=50*so;
						int n6=n5-280*so;
						if(n6>0)
						{
							thue+=n6*35/100;
							
						}
						else
							thue+=n5*30/100;
						
					}
					else
						thue+=n4*25/100;
				}
				else
					thue+=n4*20/100;
			}
			else
				thue=n2*15/100;
		}
		else
			thue+=n1*10/100;
		
	}
	else
		thue+=n*5/100;
	cout<<thue;
}
