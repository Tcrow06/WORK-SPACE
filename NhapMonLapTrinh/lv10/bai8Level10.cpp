#include<bits/stdc++.h>
using namespace std;
void nhap(char A[],char B[]);
void ktraChuoiCon(char A[],char B[]);
int main()
{
	char A[50],B[50];
	nhap(A,B);
	ktraChuoiCon(A,B);
	return 0;
}
void nhap(char A[],char B[])
{
	cout<<"chuoi lon: "<<endl;
	gets(A);
	cout<<"chuoi can kiem tra: "<<endl;
	gets(B);
}
void ktraChuoiCon(char A[],char B[])
{
	if(strstr(A,B)!=NULL)
		cout<<"la chuoi con";
	else
		cout<<"khong phai la chuoi con";
}
