#include<bits/stdc++.h>
using namespace std;
int n,m,a[101];
vector<int> v[101];
queue<int> qe;
void nhap(){
    cout<<"nhap so dinh,canh:";
    cin >> n >> m;
    cout<<"nhap canh dinh dau,cuoi\n";
    memset(a,0,sizeof(a));
    for(int i = 1;i <= m;i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    qe.push(1);
    a[1] = 1;
}
void thucHien(int u);
int main(){
    nhap();
    cout<<"cay khung theo chieu rong:\n";
    thucHien(1);
    return 0;
}
void thucHien(int u){
    while(!qe.empty()){
        int t = qe.front();
        qe.pop();
        cout << t << " ";
        for(auto x : v[t]){
            if(a[x] == 0){
                qe.push(x);
                a[x] = 1;
            }
        }
    }

}
