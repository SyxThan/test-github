#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int S[n],F[n];
        for(int i = 0;i < n;i++){
            cin >> S[i];
        }
        for(int i = 0;i < n;i++){
            cin >> F[i];
        }
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n - i - 1;j++){
                if(F[j] > F[j+1]){
                    swap(F[j],F[j+1]);
                    swap(S[j],S[j+1]);
                }
            }
        }
        int cnt = 1;
        int res = F[0];
        for(int i = 0;i < n - 1;i++){
            if(res <= S[i+1]){
                res = F[i+1];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}