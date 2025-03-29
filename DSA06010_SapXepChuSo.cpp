#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        set<int> se;
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            while(x > 0){
                se.insert(x % 10);
                x /= 10;
            }
        }
        for(auto it : se){
            cout << it << " ";
        }
        cout << endl;
    }
}