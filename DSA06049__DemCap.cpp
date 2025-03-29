#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        int a[100000];
        for(ll i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        ll cnt = 0;
        for(int i = 0;i < n ;i++){
            cnt += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);  // a + i + 1 la dia chi cua phan tu a[i + 1]
            // tim vi tri dau tien ma phan tu a[i] + k <= a[j] (j > i)
            // ans la vi tri do - i
            // vi du: 1 2 3 4 5 6 7 8 9 10, k = 3
            // i = 0, a[i] = 1, a[i] + k = 4
            // lower_bound(4) = 4
            // i = 1, a[i] = 2, a[i] + k = 5
        }
       cout << cnt << endl;
    }
}