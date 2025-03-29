#include<bits/stdc++.h>

using namespace std;


int n,k, res;
int a[1000], b[1000];


void ktao(){
    for(int i = 1;i <= k;i++){
        cin >> a[i];
    }
}
void sinh(){
    int i = k;
    while(i > 0 && a[i] == n - k + i) i--;
    if(i == 0) {
        res = k;
        return;
    }
    else {
        a[i]++;
        for(int j = i + 1;j <= k;j++){
            a[j] = a[j - 1] + 1;
        }
    }
}



int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ktao();
        res = -1;
        set<int> cnt;
        for(int i = 1;i <= k;i++){
            cnt.insert(a[i]);
        }
        sinh();
        int x1 = cnt.size();
        if(res != -1) cout << res << endl;
        else {
            for(int i = 1;i <= k;i++){
                cnt.insert(a[i]);
            }
            cout << cnt.size() - x1 << endl;
        }
    }
}