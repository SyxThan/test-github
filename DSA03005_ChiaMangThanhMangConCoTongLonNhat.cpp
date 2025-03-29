#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        long long sum1 = 0;
        long long sum2 = 0;
        int pos = min(k,n-k);
        for(int i = 0;i < n;i++){
            if(i < pos){
                sum1 += a[i];
            }
            else sum2 += a[i];
        }
        long long res = sum2 - sum1;
        cout << res << endl;
    }
}