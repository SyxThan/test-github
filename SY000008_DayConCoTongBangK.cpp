#include<bits/stdc++.h>

using namespace std;


int a[11], x[11], ok, n , s;

void in(int n){
    cout << "[";
    for(int i = 1;i < n - 1;i++){
        cout << x[i] << " ";
    }
    cout << x[n - 1] << "]" << " ";
}

void Try(int i,int sum, int cur){
    if(sum == s) {
        ok = 1;
        in(i);
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
        ok = 0;
        for(int i = 1;i <= n;i++) cin >> a[i];
        sort(a+1,a+n+1);
        Try(1,0,1);
        if(!ok) cout << "-1";
        cout << endl;
    }
}