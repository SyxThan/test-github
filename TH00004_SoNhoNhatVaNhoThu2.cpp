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
        int m1 = 1e9;
        int m2;
        sort(a,a+n);
        if(a[0] == a[1] ){
            cout << "-1" << endl;
        }
        else cout << a[0] << " " << a[1] << endl;
    }
}