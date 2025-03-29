#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
            a[i] *= a[i];
        }
        
        int ok = 0;
        for(int i = n - 1;i >= 2;i--){
            int l = 0;
            int r = i - 1;
            while(l < r){
                if(a[l] + a[r] > a[i]) r--;
                else if(a[l] + a[r] < a[i]) l++;
                else {
                    ok = 1;
                    break;
                }
                
            }
            
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
