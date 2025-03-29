#include<bits/stdc++.h> 

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0;i < n;i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        bool ok = true;
        for(int i = 0 ;i < n;i++){
            if(a[i] != b[i] && a[n - i - 1] != b[i]){
                ok = false;
                cout << "No" << endl;
                break;
            }
        }
        if(ok) cout << "Yes" << endl;
    }
}