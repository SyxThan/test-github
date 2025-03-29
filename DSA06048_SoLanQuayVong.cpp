#include<bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        long long b[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        long long first = a[0];
        int pos;
        for(int i = 0;i < n;i++){
            if(a[i] == first){
                pos = i;
                break;
            }
        }
        int k = (n - pos % n) % n;
        cout << k << endl;
      
    }
}