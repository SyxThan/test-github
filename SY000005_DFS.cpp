#include<bits/stdc++.h>

using namespace std;

vector<int> a[100000];  // tao mang vector a co 1001 phan tu de luu danh sach ke
int n,m;
int visited[100000]; // tao mang visited de danh dau cac dinh da duyet
void inp(){
    cin >> n >> m;
    for(int i = 0;i < m;i++){ // duyet qua m canh
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);  // them y vao danh sach ke cua x
        a[y].push_back(x);  // them x vao danh sach ke cua y
    }
}
void dfs(int u){
    cout << u << " ";
    visited[u] = 1;
    for(int v: a[u] ){  // duyet qua cac dinh ke cua u
        if(visited[v] == 0){  // neu v chua duoc duyet
            dfs(v);  // duyet v
        }
    }
}
int main(){
    inp();
    dfs(1);
}