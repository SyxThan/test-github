#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        set<int> s;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            s.insert(a[i]);

        }
        for(int i = 0;i < m;i++){
            cin >> b[i];
            s.insert(b[i]);
        }
        map<int,int> mp1;
        for(auto it:s){
            cout << it << " ";
        }
        cout << endl;
        for(int i = 0;i < n;i++){
            mp1[a[i]] = 1;
        }
        for(int i = 0;i < m;i++){
            if(mp1[b[i]] == 1){
                cout << b[i] << " ";
            }
        }
        cout << endl;

    }
}