#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
            b[i] = i + 1;
        }
        int cnt = 1; 
        while(a!=b) {    
            cnt++;
            next_permutation(b.begin(),b.end());
        }
        cout << cnt << endl;
    }
}
