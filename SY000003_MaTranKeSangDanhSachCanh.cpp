#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> e;  // tao mang vector a co 1001 phan tu de luu danh sach ke
int a[1001][1001];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
            if(a[i][j] == 1 && i < j){  // them y vao danh sach ke cua x
                e.push_back({i,j});
            }
        }
    }
    for(auto x : e){
        cout << x.first <<  " " << x.second << endl;
    }

}