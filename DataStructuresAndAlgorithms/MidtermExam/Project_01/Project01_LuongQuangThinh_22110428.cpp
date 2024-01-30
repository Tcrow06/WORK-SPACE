//dinh dang file "Xe2Banh.txt"
//ten xe 			, soN  soThuc
//(chuoi)			 (nam)  (Tien)
//sirius 			, 2018 21.1
//satria 			, 2023 64.2
//KAWASAKI H2 	, 2020 876.4
//Bmw S1000 RR	, 2018 500.8 
//sirius 			, 2023 18.5
//wave alpha		, 2023 21.5
//ninja h2 		, 2019  800 
//HAYABUSA 1300 	, 2020 644.566
//
//dinh dang file "SoNguyen.txt"
//-3 2 5 2 1 7



#include<bits/stdc++.h>
using namespace std;
struct XE2BANH{
	string name;
	int namPhatHanh;
	double gia;
	void print(){
		cout<<setw(17)<<left<<name<<setw(15)<<left<<namPhatHanh<<gia<<endl;
	}
};
#define ElementType XE2BANH
#define namNay 2023
int cnt;
void Print(int x, int key){
	cout<<x<<" ";
}
void printDinhDang(XE2BANH x){
	cout<<setw(15)<<left<<"Ten xe"<<setw(12)<<left<<"Nam Ra Mat"<<"Gia Lan Banh(Trieu VND)\n";
}
void printDinhDang(int x){
	
}
void Print(XE2BANH x, int key){
	x.print();
}
void Printlist( vector<ElementType> a,string x){
	cout<<x;
	ElementType x1;
	printDinhDang(x1);
	for(int i = 0 ; i<a.size() ; i++)
		Print(a[i],1);
}
void xoaKhoangTrangThua2Dau(string&x){
	while(x[0]==' ')
		x.erase(x.begin()+ 0);
	while(x[x.size()-1]==' ')
		x.erase(x.begin()+ x.size()-1);
}
void chuanHoa(string&x){
	
	xoaKhoangTrangThua2Dau(x);
	for(int i= 1 ;i< x.size() ; i++){
		if(x[i]==' '&&x[i+1]==' '){
			x.erase(x.begin()+ i);
			i--;
		}
		x[i]= toupper(x[i]);
	}
	x[0] = toupper(x[0]);
					
}

bool ktraSoThuc(string&s){
	xoaKhoangTrangThua2Dau(s);
	int cnt =0;
	for(int i =0; i<s.size(); i++){
		s[i]= tolower(s[i]);
		if(s[i]== '.') cnt++;
		if(cnt>1)
			return false;
		if(('0'>s[i]||s[i]>'9')&&s[i]!='.')
			return false;
	}
	return true;	
}
bool ktraName(string&x){
	xoaKhoangTrangThua2Dau(x);
	for(int i =0; i< x.size(); i++){
		x[i]= tolower(x[i]);
		if((x[i]<'a'||x[i]>'z')&&(x[i]<'0'||x[i]>'9')&&x[i]!=' ')
			return false;
	}
	return true;
}
bool checkNam(string x){
	int a = stoi(x);
	if(a<=0||a>namNay)
		return false;
	 return true;
}
bool ktraChuoiSo(string&s){
	xoaKhoangTrangThua2Dau(s);
	for(int i = 0; i< s.size(); i++)
		if((s[i]<'0'||s[i]>'9')&&s[i]!='-')
			return false;
	return true;
}
bool soSanh(string x, string y){
	
	chuanHoa(x);
	chuanHoa(y);
	stringstream sx(x);
	stringstream sy(y);
	string a,b;
	string aCheck;
	while(sx>>a&&sy>>b){
		for(int i = 0; i < min(a.size(), b.size()); i++ )
			if(a[i]!= b[i]){
				if(a[i] > b[i]){
					return true;
				}
				
				else {
					return false;
				}
			}		
		if(a.size()> b.size())
			return true;
		if(a.size()< b.size())
			return false;
		aCheck = a ;
	}
	
	if(sx>>a||a!= aCheck)
		return true;
	return false;
}
bool xuLy(XE2BANH x, XE2BANH y, int key){
	
	switch(key){
		case 1: return soSanh(x.name,y.name);
		
		case 2: return x.namPhatHanh > y.namPhatHanh;
		
		case 3: return x.gia > y.gia; 
		
		default: return false;
	}
	return false;
}
bool xuLy(int a, int b, int key){
	
	return a > b;
} 
void selectionSort(vector<ElementType>&a, int key){
	for(int i = 0 ; i < a.size() - 1 ; i++){
		int min = i;
		for(int j = i+1; j < a.size() ; j++)
			if(xuLy(a[min],a[j],key))
				min = j;
		swap(a[i], a[min]);
	}
}
void insertionSort(vector<ElementType>&a, int key){
	
	int pos;
	for(int i = 1 ; i < a.size(); i++){
		
		ElementType x = a[i]; pos = i - 1;
		while(pos >=0 && xuLy(a[pos],x,key)){
			a[pos +1] = a[pos];
			pos--;
		}
		a[pos+1] = x;	
	}
}
void bubbleSort(vector<ElementType>&a, int key){
	for(int i = 0 ; i < a.size()-2 ; i++)
		for(int j = a.size()- 1; j > i ; j--){
			if(xuLy(a[j-1], a[j], key))
				swap(a[j-1],a[j]);
		}
		
}
void quickSort1(vector<ElementType>&a, int left, int right, int key){
	int i, j;
	i = left; j = right;
	ElementType x = a[(left+right)/2];
	while(true){
		while(xuLy(x, a[i], key)&&i<=j) i++;
		while(xuLy(a[j], x, key)&&j>=i) j--;
		if(i>j) break;
		swap(a[i],a[j]);
		i++;j--;	
	}
	if(left < j) quickSort1(a,left, j, key);
	if(i < right) quickSort1(a, i, right, key);
}
void quickSort2(vector<ElementType>&a, int left, int right, int key){
	int i = left + 1;
	int j = right;
	ElementType x = a[left];
	while(true){
		while(i<=j&&xuLy(x, a[i], key)) i++;
		while(j>=i&&xuLy(a[j], x, key)) j--;
		if(i>=j) break;
		swap(a[i],a[j]);
		i++;j--;	
	}
	swap(a[j],a[left]);
	if(j+1<right)
		quickSort2(a,j+1,right, key);
	if(left<j-1)
		quickSort2(a,left,j-1, key);	
	
}
void shakerShort(vector<ElementType>&a, int key){
	
	int left =0, right = a.size()-1, k = right;
	while(left < right){
		for(int j = right ; j>left ; j -- )
			if(xuLy(a[j-1],a[j], key)){
				swap(a[j], a[j-1]);
				k = j;
			}
		left = k;
		for(int i = left ; i< right; i++)
			if(xuLy(a[i],a[i+1], key)){
				swap(a[i],a[i+1]);
				k = i;
			}
		right = k;	
	}	
}
bool input(string s, XE2BANH&x){
	cnt++;
	stringstream ss(s);
	getline(ss>>ws, x.name, ',');
	if(ktraName(x.name)){
		chuanHoa(x.name);
		string nam;
		ss>>nam;
		if(ktraChuoiSo(nam)){
			if(checkNam(nam)){
				x.namPhatHanh = stoi(nam);
				string g;
				ss>>g;
				if(ktraSoThuc(g)){
					x.gia = stod(g);
					return true;
				}
					
				cout<<"Loi gia lan banh cua xe thu "<<cnt<<" trong file (gia phai la 1 so nguyen hoac so thuc): "<<g<<endl;
				return false;
			}
			else{
				cout<<"Nam khong ton tai: "<<nam<<endl;
				return false;
			}
		}
		else{
			cout<<"Loi dinh dang nam cua xe thu "<<cnt<<" trong file: "<<nam<<endl;
			return false;
		}
	}
	else{
		cout<<"Loi ten xe thu "<<cnt<<" trong file: "<<x.name<<endl;
		cout<<"Ten xe chi bao gom chu cai va chu so\n";
		return false;
	}
		
}

bool input(string s, int&x){
	if(ktraChuoiSo(s))
		x = stoi(s);
	else{
		cout<<"Sai kieu so: "<<s<<endl;
		return false;
	}
	return true;
}
string tenFile(XE2BANH x){
	return "Xe2Banh.txt";
}
string tenFile(int x){
	return "SoNguyen.txt";
}
void docFile(vector<ElementType>&a, int x, string s){

	ifstream in(s);
	if(!in){
		cout<<"Khong mo duoc file!!\n";
		return;
	}
	string line;
	ElementType tmp;
	while(in>>line){
		if(input(line, tmp))
			a.push_back(tmp);
		else 
			break;
	}
	cout<<"!!! Ket thuc doc file!!!\n\n";
	in.close();
}
void docFile(vector<ElementType>&a, XE2BANH x, string s){
	cnt = 0;
	ifstream in(s);
	if(!in){
		cout<<"Khong mo duoc file!!\n";
		return;
	}
	string line;
	ElementType tmp;
	while(getline(in, line)){
		if(input(line, tmp))
			a.push_back(tmp);
		else 	
			break;
	}
	cout<<"!!! Ket thuc doc file!!!\n\n";
	in.close();
}
void docFileStart(vector<ElementType>&a){
	ElementType x;
	string s = tenFile(x);
	xoaKhoangTrangThua2Dau(s);
	docFile(a,x,s);
}
int menu(){
	string choice;
	cout<<"\n-Lua chon kieu sap xep:\n";
	cout<<"1. Selection Sort.\n2. Insertion Sort.\n3. Bubble Sort.\n4. Quick Sort 1\n5. Quick Sort 2\n6. Shaker Sort\n7. Quay lai lua chon tim kiem va sap xep\n0. Thoat!\n";
	cout<<"Lua chon cua ban la: ";
	getline(cin,choice);
	while(!ktraChuoiSo(choice)||(choice[0]<'0'||choice[0]>'7')||choice.size()>1){
		cout<<"Nhap lai lua chon: ";
		getline(cin,choice);
	}
	return stoi(choice);
}

void choiceSort(vector<ElementType>&a, int choice, int key){
	switch(choice){
		case 1: selectionSort(a,key);
		break;
				
		case 2: insertionSort(a,key);
		break;
				
		case 3: bubbleSort(a,key);
		break;
				
		case 4: quickSort1(a, 0, a.size()-1, key);
		break;
		
		case 5: quickSort2(a, 0, a.size()-1, key);
		break;
				
		case 6: shakerShort(a, key);
		break;
				
		default: 
		break;
	}
}
int menuSort(XE2BANH x){
	string choice;
	cout<<"\n-Lua chon sap xep du lieu theo: \n";
	cout<<"1. Ten xe.\n2. Nam phat hanh.\n3. Gia lan banh.\n4. Quay lai lua chon kieu sap xep.\n0.Thoat!\n";
	cout<<"Lua chon cua ban la: ";
	getline(cin,choice);
	while(!ktraChuoiSo(choice)||(choice[0]<'0'||choice[0]>'4')||choice.size()>1){
		cout<<"Nhap lai lua chon: ";
		getline(cin,choice);
	}
	return stoi(choice);
}
int menuSort(int x){
	return 0;
}
int menuSortOrSearch(){
	string choice;
	cout<<"\nLua chon sap xep hay tim kiem: \n";
	cout<<"1. Sap xep\n2. Tim kiem\n3. Them danh sach bang file\n0. Thoat!\n";
	cout<<"Lua chon cua ban la: ";
	getline(cin,choice);
	while(!ktraChuoiSo(choice)||(choice[0]<'0'||choice[0]>'3')||choice.size()>1){
		cout<<"Nhap lai lua chon: ";
		getline(cin,choice);
	}
	return stoi(choice);
}
int menuSearch(XE2BANH x){
	string choice;
	cout<<"\nLua chon tim kiem(tim kiem nhi phan) theo:\n";
	cout<<"1. Ten xe.\n2. Nam phat hanh.\n3. Gia lan banh.\n4. Quay lai lua chon tim kiem va sap xep\n0. Thoat!\n";
	cout<<"Lua chon cua ban la: ";
	getline(cin,choice);
	while(!ktraChuoiSo(choice)||(choice[0]<'0'||choice[0]>'4')||choice.size()>1){
		cout<<"Nhap lai lua chon: ";
		getline(cin,choice);
	}
	return stoi(choice);
}
bool xuLyName(XE2BANH x, XE2BANH y){
	
	string a = x.name, b = y.name;
	chuanHoa(a); chuanHoa(b);
	if(a.size()!= b.size())
		return false;
	for(int i =0; i<a.size(); i++){
		if(a[i]!= b[i])
			return false;
	}
	return true;
}
bool checkEqual(XE2BANH x, XE2BANH y, int key){
	switch(key){
		case 1: return xuLyName(x,y);
		
		case 2: return x.namPhatHanh == y.namPhatHanh;
		
		case 3: return x.gia == y.gia;
		
		deafault: break;
	}	
}
bool checkEqual(int x, int y, int key){
	return x==y;
}
bool xuLy(int x, XE2BANH y, int key){
	return false;
}
int binarySearch(vector<ElementType>a, int left, int right, ElementType x, int key){
	
	
	while(left <= right){
		int mid = (left+ right)/2;
		if(checkEqual(a[mid],x,key))
			return mid;
		else if(xuLy(a[mid],x,key))
			right = mid -1;
		else
			left = mid +1;
	}
	return -1;
	
}
vector<ElementType > dsSearch(vector<ElementType> a, ElementType x, int key){
	vector<ElementType> ans;
	int viTri =0;
	while(true){
		viTri = binarySearch(a,0, a.size()-1, x, key);
		if(viTri == -1)
		 	break;
		ans.push_back(a[viTri]);
		a.erase(a.begin()+ viTri);
	}
	return ans;
}
string info(int key){
	switch(key){
		case 1: return " ten xe ";
		
		case 2: return " nam phat hanh ";
		
		case 3: return " gia lan banh (trieu VND) ";
		
		default: 
			break;
	}
}
string infoSearch(int key){
	
	string x;
	cout<<"Nhap"<<info(key)<<"can tim: ";
	while(true){
		getline(cin,x);
		if(key == 1 ){
			if(ktraName(x)) break;
			else cout<<"Sai dinh dang. Nhap lai"<<info(key)<<"can tim: ";	
		}
		else if(key == 2){
			if(ktraChuoiSo(x)&&checkNam(x)) break;
			else cout<<"Sai dinh dang hoac nam khong ton tai.\nNhap lai"<<info(key)<<"can tim: ";
		}
		else if(key == 3){
			if(ktraSoThuc(x)) return x;
			else cout<<"Sai dinh dang. Nhap lai"<<info(key)<<"can tim: ";
		}	
	}
	return x;
}
void oopSort(vector<ElementType>&a,XE2BANH x,int choice, int&key){
	
	while(true){
		key = menuSort(x);
		if(key == 0||key == 4){
			system("cls");
			if(key==4) Printlist(a,"Danh sach hien co\n");
			return;
		}
			
		choiceSort(a, choice, key);
		Printlist(a,"\nDanh sach xe 2 banh sau khi sap xep: \n");
		
		cout<<"\nNhan phim bat ky de tiep tuc . . .\n";
	    system("pause");
	    system("cls");
	    Printlist(a,"Danh sach hien co\n");
	}	
}
void oopSort(vector<ElementType> a,int x, int choice, int&key){
	key = 2;
	choiceSort(a,choice,key);
	Printlist(a,"Danh sach sau khi sap xep\n");
	cout<<endl;
}
int loopSort(vector<ElementType> a){
	ElementType x;
	while(true){
		int choice = menu();
		if(choice == 0)
			return 0;
		if(choice == 7){
			system("cls");
			Printlist(a,"Danh sach hien co\n");
			return 1;
		}
			
		int key;
		oopSort(a,x, choice, key);
		if(key == 0)
			return 0;
				
	}	
}
void gan(int & x, string s, int key){
	x = stoi(s);
}
void gan(XE2BANH&x, string s, int key){
	if(key == 1)
		x.name = s;
	else if(key ==2)
		x.namPhatHanh =  stoi(s);
	else 
		x.gia = stod(s);
}
int loopSearch(vector<ElementType> a,XE2BANH y){
	
	while(true){
		int choiceSearch = menuSearch(y);
		if(choiceSearch == 0)
			return 0;
		if(choiceSearch == 4){
			system("cls");
	  		Printlist(a,"Danh sach hien co\n");
	    	return 1;
		}
			
		string s = infoSearch(choiceSearch);
		ElementType x;
		gan(x,s,choiceSearch);
		quickSort1(a, 0, a.size()-1, choiceSearch);
		vector<ElementType> ans = dsSearch(a,x,choiceSearch);	
		if(ans.size()>0){
			Printlist(ans,"-Thong tin xe can tim\n" );
		}			
		else{
			cout<<"\n-Khong co thong tin xe can tim\n";
		}
		cout<<"\nNhan phim bat ky de tiep tuc . . .\n";
	    system("pause");
	    system("cls");
	    Printlist(a,"Danh sach hien co\n");
		
	}
}
int loopSearch(vector<ElementType> a,int y){
	cout<<"Nhap phan tu can tim kiem: ";
	string s;
	while(true){
		getline(cin,s);
		if(ktraChuoiSo(s))
			break;
		cout<<"Nhap lai phan tu: ";
	}
	ElementType x;
	gan(x,s,1);
	int vt = binarySearch(a,0,a.size()-1,x,2);
	if(vt!=-1)
		cout<<"-Co phan tu trong danh sach\n";
	else cout<<"-Khong co phan tu trong danh sach\n";
	
}
void option(vector<ElementType> a, XE2BANH x){
	while(true){
		int choiceSOS = menuSortOrSearch();
		if(choiceSOS == 0)
			break;
		if(choiceSOS == 1){
			if(loopSort(a) == 0)
				break;
		}
		else if(choiceSOS == 2){
			if(loopSearch(a,x) == 0)
				break;
		}
		else if(choiceSOS == 3){
			string s;
			cout<<"Nhap ten file: ";
			getline(cin,s);
			int len = a.size();
			xoaKhoangTrangThua2Dau(s);
			docFile(a,x,s);
			if(a.size()!=len)
				Printlist(a, "Danh sach sau khi nhap\n");
			cout<<"\nNhan phim bat ky de tiep tuc . . .\n";
        system("pause");
    	system("cls");
    	Printlist(a,"Danh sach hien co\n");
		}
	}
}
void option(vector<ElementType>a, int x){
	while(true){
		int choiceSOS = menuSortOrSearch();
		if(choiceSOS == 0)
			break;
		if(choiceSOS == 1){
			if(loopSort(a) == 0)
				break;
		}
		else if(choiceSOS == 2){
			loopSearch(a,x);
		}
		else if(choiceSOS == 3){
			string s;
			cout<<"Nhap ten file: ";
			getline(cin,s);
			int len = a.size();
			docFile(a,x,s);
			if(a.size()!=len)
				Printlist(a, "Danh sach sau khi nhap\n");
		}
		
	}
}
int main(){
	vector<ElementType> a;
	docFileStart(a);
	if(a.size()>0){
		Printlist(a,"Danh sach sau khi nhap\n");
		ElementType x;
		option(a,x);
		
	}
		
}
