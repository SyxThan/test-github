#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int,int> mp;
        int cnt = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        
            if(mp.find(k) != mp.end()){
                cout << mp[k] << endl;
                cnt = 1;
            }
    
        
        if(cnt == 0) cout << -1 << endl;
        
    }    
}