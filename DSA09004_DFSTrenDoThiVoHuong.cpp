#include<bits/stdc++.h>

using namespace std;

void inp(){

}
int a[10001][10001];
int vs[10001];
int e[1001];
int n, m, x;
void dfs(int u){
    cout << u << " ";
    vs[u] = 1;
    for(int v = 1;v <= n;v++){
        if(vs[v] == 0 && a[u][v] == 1){
            e[v] = u;
            dfs(v);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> x;
        for(int i = 1;i <= m;i++){
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        dfs(x);
        cout << endl;
        for(int i = 1;i <= 6;i++){
            cout << e[i] << " ";
        }
    }
}