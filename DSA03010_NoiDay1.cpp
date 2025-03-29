#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int res = 0;
        int k = n;
        while(k != 1){
            sort(a,a+k);
            a[0] = a[0] + a[1];
            res += a[0];
            for(int j = 1;j < n - 1;j++){
                a[j] = a[j+1];
            }
            k--;
        }
        cout << res << endl;
    }
}