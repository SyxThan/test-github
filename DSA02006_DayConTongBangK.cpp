#include<bits/stdc++.h>

using namespace std;


int a[1000],x[1000],ok, s, n;

void out(int n){
    cout << "[";
    for(int i = 1;i < n - 1;i++){
        cout << x[i] << " ";
    }
    cout <<  x[n-1];
    cout << ']';
    cout << " ";
}

void Try(int i,int sum, int cur){
    if(sum == s){
        out(i);
        ok = 1;
    }
    for(int j = cur;j <= n;j++){
        sum += a[j];
        x[i] = a[j];
        if(sum <= s) Try(i+1,sum,j+1);
        sum -= a[j];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> s;
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        ok = 0;
        sort(a + 1,a+n + 1);
        Try(1,0,1);
        if(ok == 0) cout << "-1";
        cout << endl;

    }
}