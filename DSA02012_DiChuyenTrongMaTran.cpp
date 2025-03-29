#include<bits/stdc++.h>

using namespace std;

int a[11][11];
int n, m;
int cnt = 0;
void Try(int i,int j){
    if(i == n - 1 && j == m - 1) {
        cnt++;
    }
    if(j != m - 1) Try(i,j+1);
    if(i != n - 1) Try(i+1,j);
}



int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++) {
                cin >> a[i][j];
            }
        cnt = 0;
        Try(0,0);
        cout << cnt << endl;
    }
}