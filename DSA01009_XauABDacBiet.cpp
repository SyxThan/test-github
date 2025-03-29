#include<bits/stdc++.h>

using namespace std;
int n,k;

vector<int> a(16);
vector<vector<int>> ans;

int check(){
    int cntA = 0, cnt = 0;  // cnt : ktra day dung k chu A
    for(int i = 0; i < n; i++){
        if(a[i] == 0) {
            cntA++;
            if(cntA > k) return 0; // Neu cntA > k thoat
        } else {
            if(cntA == k) cnt++; // Ktra xem truoc co day co k chu A khong
            cntA = 0;   // Tra dem A ve khong
        }
    }
    if(cntA == k) cnt++; // Neu day ket thuc van con k chu A
    return cnt == 1; 
}

void Try(int i){
    for(int j = 0;j <= 1;j++){
        a[i] = j;
        if(i == n - 1) {
            if(check()) {
                ans.push_back(a);
            }
        }
        else Try(i+1);
    }
}

int main(){
    cin >> n >> k;
    Try(0);
    cout << ans.size() << endl;
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < n;j++){
            cout << char(ans[i][j] + 'A');
        }
        cout << endl;
    }
}