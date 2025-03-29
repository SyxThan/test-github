#include<bits/stdc++.h>

using namespace std;

int a[11];
vector<string> v;

void add(int n){
    string str = "[";
    for(int i = 0;i < n - 1;i++){
        str += to_string(a[i]);
        str += " ";
    }
    str += to_string(a[n-1]);
    str += "]";
    v.push_back(str);
}

void TryAt(int n){
    add(n);
    for(int i = 0;i < n;i++){
        a[i] = a[i] + a[i+1];
    }
    if(n - 1 != 0) TryAt(n-1);
    
}




int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        TryAt(n);
        for(int i = v.size() - 1;i >= 0;i--){
            cout << v[i] << " ";
        }
        v.clear();
        cout << endl;
    }

}