#include<bits/stdc++.h>
#define MOD 1000000007 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[100000];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long m = 0;
        for(int i = 0;i < n;i++){
            m =  (m % MOD + ((a[i] % MOD) * (i % MOD))) % MOD;
        }
        cout << m << endl;
    }
}