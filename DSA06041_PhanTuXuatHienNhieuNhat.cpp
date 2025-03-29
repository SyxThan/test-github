#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        map<int, int> mp;
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        int ok = 0;
        int m = -1e6;
        int res;
        for(auto it : mp){
            if (it.second > n / 2 && it.second > m) {
                res = it.first;
                ok = 1;
            }
        }
        if(!ok) cout << "NO" << endl;
        else cout << res << endl;
        
        
        
    }

}