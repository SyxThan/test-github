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
        }
        for(int i = 0;i < n;i++){
            int x = k - a[i];
            if(mp.find(x) != mp.end()){
                cnt+=mp[x];
            }
            mp[a[i]]++;
        }

        cout << cnt << endl;
        
    }    
}