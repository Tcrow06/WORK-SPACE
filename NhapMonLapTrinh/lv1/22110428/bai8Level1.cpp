#include<iostream>
using namespace std;
void nhap(char&n);
int doiKieuChu(char n,char&chuHoa,char&chuThuong);
void xuat(int k,char chuHoa,char chuThuong);
int main()
{
	char n,chuHoa,chuThuong;
	nhap(n);
	int k=doiKieuChu(n,chuHoa,chuThuong);              
	xuat(k,chuHoa,chuThuong);
	return 0;
}
void nhap(char&n)
{
	cin>>n;
}
int doiKieuChu(char n,char&chuHoa,char&chuThuong)
{
	if('a'<=n&&n<='z')
		{
			chuHoa=n-32;
			return 0;
		}
	else 
		if('A'<=n&&n<='Z')
		{
			chuThuong=n+32;
			return 1;
		}	
	else 
		return 2;
}
void xuat(int k,char chuHoa,char chuThuong)
{
	if(k==0)
		cout<<chuHoa;
	else if (k==1)
		cout<<chuThuong;
	else
		cout<<"khong the doi kieu chu cai";
}









