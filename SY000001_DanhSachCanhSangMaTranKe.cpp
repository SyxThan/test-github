#include<bits/stdc++.h>

using namespace std;

int a[1001][1001], n, m;

int main(){
    cin >> n >> m;
    for(int i = 0;i < m;i++){ // Tao ma tran ke bang cach nhap vao 2 dinh x, y roi gan a[x][y] = 1 va a[y][x] = 1
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}