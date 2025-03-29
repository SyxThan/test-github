#include<bits/stdc++.h>

using namespace std;


int check(int a[],int n, int k){
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(binary_search(a + j + 1,a + n,k - a[i] - a[j])) return 1;
        }
    }
    return 0;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        int a[n+5];
        for(int i = 0;i < n;i++){
             cin >> a[i];
        }
        sort(a,a+n);
        if(check(a,n,k)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}