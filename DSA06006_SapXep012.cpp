#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[10000];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        multiset<int> ms;
        for(int i = 0;i < n;i++){
            ms.insert(a[i]);
        }
        for(auto it:ms){
            cout << it << " ";
        }
        cout << endl;
    }
}