#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        do{
            for(int i = 0;i < s.size();i++){
                cout << s[i];
            }
            cout << " ";
        } while(next_permutation(s.begin(),s.end()));
        cout << endl;
    }
}