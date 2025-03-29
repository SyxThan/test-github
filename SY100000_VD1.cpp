#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        for(int i = 0;i < s.size();i++){
            s[i] = tolower(s[i]);
        }
        stringstream ss(s);
        vector<string> v;
        string w;
        while(ss >> w){
            w[0] = toupper(w[0]);
            v.push_back(w);
        }
        for(int i = 1;i < v.size();i++){
            cout << v[i];
            if(i != v.size() - 1)  cout << " ";
            else cout << ',';
        }
        cout << " " << v[0];
        cout << endl;
    }
}

