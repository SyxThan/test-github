#include<bits/stdc++.h>

using namespace std;

vector<int> adj[100000];  // tao mang vector a co 1001 phan tu de luu danh sach ke
int a[1001][1001];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
            if(a[i][j] == 1){  // them y vao danh sach ke cua x
                adj[i].push_back(j);
            }
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 0;j < adj[i].size();j++){  // duyet qua cac dinh ke cua i
            cout << adj[i][j] << " ";         // in ra cac dinh ke cua i
        }
        cout << endl;
    }
    

}