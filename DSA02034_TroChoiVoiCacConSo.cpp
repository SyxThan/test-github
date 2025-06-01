#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n;
int a[1001];
bool unvs[1001];

void init(){
    for(int i = 0;i <= n;i++){
        unvs[i] = true;
    }
}

void solve(){
    int ok = 1;
    for(int i = 2;i <= n;i++){
        if(abs(a[i] - a[i-1]) == 1) {
            return;
        }
    }
    if(ok == 1){
        for(int i = 1;i <=n ;i++){
            cout << a[i];
        }
        cout << endl;
    }
}
void Try(int i){
	for(int j = 1;j <= n;j++){
        if(unvs[j]){
            a[i] = j;
            unvs[j] = false;
            if(i == n){
                solve();
            }
            else Try(i+1);
            unvs[j] = true;
        }
    }
}

int main(){
	int t;
    cin >> t;
    while(t--){
        cin >> n;
        init();
        Try(1);
    }
}
