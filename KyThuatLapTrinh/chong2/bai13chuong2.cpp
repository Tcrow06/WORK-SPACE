#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void taoBang(int A[][6]);
void xet(int A[][6],int i,int j);
int mayDi(int A[][6],int&sum,int n);
int nguoiDi(int&sum,int m);
void startGame(int A[][6]);
void ketQua(int a);
int main()
{
	int A[36][6]={0};
	taoBang(A);
	startGame(A);
	return 0;
}
void startGame(int A[][6]){
	
	int di;
	cout<<"CHON NGUOI/MAY(0/1) DI TRUOC: ";
	cin>>di;
	while(di!=0&&di!=1)
    {
        cout<<"MOI BAN CHON LAI: ";
        cin>>di;
    }
	int sum=0,m=-1,n;
	if(di==1)
		m=mayDi(A,sum,n);
	while(sum<=35){
		
        n=nguoiDi(sum,m);
        if(sum>35){
        	
        	ketQua(0);
        	break;
		}
        m=mayDi(A,sum,n);
        if(sum>35){
        	
        	ketQua(1);
        	break;
		}
    }
}
void ketQua(int a){
	
	if(a==0)
		cout<<"MAY THANG!";
	else
		cout<<"BAN THANG!";
}
int nguoiDi(int& sum, int m)
{
    int n;
    string input;
    bool validInput = false;
    while (!validInput)
    {
        cout << "MOI BAN CHON SO TU [1,5]: ";
        
        cin>>input;
        if (input.size() == 1 && input[0] >= '1' && input[0] <= '5' && input[0] != ('0' + m))
        {
            n = input[0] - '0';
            sum += n;
            cout << "TONG HIEN TAI: " << sum << endl;
            validInput = true;
        }
        else
        {
            cout << "NHAP LAI" << endl;
        }
    }
    return n;
}
//int nguoiDi(int&sum,int m){
//	
//	int n;
//	cout<<"MOI BAN CHON SO TU [1,5]: ";
//	cin>>n ;
//	while(n==m||n<1||n>5){
//		cout<<"MOI BAN NHAP LAI: ";
//		cin>>n;
//	}  
//	sum+=n;
//	cout<<"TONG HIEN TAI: "<<sum<<endl;
//	return n;
//}
int mayDi(int A[][6],int&sum,int n){
	bool check=true;
	int e;
	for(int i=1;i<=5;i++){
        if(A[sum][i]!=n&&A[sum][i]!=0)
            {
                cout<<"MAY CHON SO: "<<A[sum][i];
                e=A[sum][i];
                sum+=A[sum][i];
                cout<<"\nTONG HIEN TAI: "<<sum<<endl;
                check=false;
            }
        if(e==A[sum][i])
            break;
    }  
    if(check==true){
            srand(time(NULL));
            while(true)
            {
                e=rand()%5+1;
                if(e!=n)
                {
                    cout<<"MAY CHON SO: "<<e;
                    sum+=e;
                    cout<<"\nTONG HIEN TAI: "<<sum<<endl;
                }
                if(e!=n)
                break;
            }
        }
    return e;
}
void taoBang(int A[][6])
{
	for(int i=35;i>=0;i--)
		for(int j=1;j<=5;j++)
			if((A[i][j]+i+j)<=35)
			{
				xet(A,i,j);
			}
}
void xet(int A[][6],int i,int j)
{
	if((A[i+j][j]==j&&A[i+j][0]==j)||(A[i+j][j]==0&&A[i+j][0]==0))
		{
			A[i][0]+=j;
			A[i][j]=j;
		}		
}

