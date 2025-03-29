#include<bits/stdc++.h>

using namespace std;

int a[1000], n, k, final;

void ktao(){
    for(int i = 1;i <= n;i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i > 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) final = 1;
    else a[i] = 1;
}

int check(int a[], int k){
    int count = 0;
    for(int i = 1;i <= n;i++){
        if(a[i] == 1) count++;
    }
    if(count == k) return 1;
    else return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ktao();
        final = 0;
        while(final == 0){
            if(check(a,k) == 1){
                for(int i = 1;i <= n;i++){
                    cout << a[i];
                }
                cout << endl;
            }
            sinh();
            
        }
    }
}