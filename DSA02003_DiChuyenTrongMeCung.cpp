#include<bits/stdc++.h>

using namespace std;

int a[11][11];
int n;
int ok = 1;
void tryAt(int i, int j, string s){
    if(a[i][j] == 0) return;   // neu o nay la 0 thi return
    if (i == n && j == n){ // neu o nay la o cuoi cung thi in ra
        cout << s << " ";
        ok = 0;
    }
    if(i != n) {    // neu chua o cuoi cung thi di xuong <uu tien>
        tryAt(i+1,j, s + "D");
    }   
    if(j != n){  // neu chua o cuoi cung thi di sang phai
        tryAt(i,j+1,s + "R");
    }

}


int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1;i <= n;i++)
            for(int j = 1;j <= n;j++) {
                cin >> a[i][j];
            }
        tryAt(1,1,"");
        if(ok == 1) cout << -1;
        cout << endl;
    }
}