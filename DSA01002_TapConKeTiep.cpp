#include<bits/stdc++.h>

using namespace std;   

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int final = 0;
        int a[100];
        for(int i = 1;i <= k;i++){
            cin >> a[i];
        }
        int i = k;
        while(i > 0 && a[i] == n - k + i ){
            i--;
        }
        if(i == 0){
            final = 1;
        }
        else if(a[i] != n - k + i){
            a[i]++;
            for(int j = i + 1;j <= k;j++){
                a[j] = a[j - 1] + 1;
            }
        }
        if(final == 1){
            for(int i = 1;i <= k;i++){
                cout << i << " ";
            }
        }
        else{
            for(int i = 1;i <= k;i++){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}