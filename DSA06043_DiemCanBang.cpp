#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        vector<long long> prefix(n);
        prefix[0] = a[0];
        for(int i = 1;i < n;i++){
            prefix[i] = prefix[i-1] + a[i];
        }
        int ok = 0;
        int res;
        for(int i = 1;i < n - 1;i++){
            if(prefix[i-1] == prefix[n - 1] - prefix[i]) {
                ok = 1;
                res = i + 1;
            }
        }
        if(ok) cout << res << endl;
        else cout << -1 << endl;
    }
}

