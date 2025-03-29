#include<bits/stdc++.h>

using namespace std;

int n, k;
string s;
vector<string> v;
set<string> se;
vector<string> res;

void backtrack(int i){
    for(int j = i;j < v.size();j++){
        res.push_back(v[j]);
        if(res.size() == k ){
            for(int l = 0;l < k;l++){
                cout << res[l] << " ";
            }
            cout << endl;
        }
        else {
            backtrack(j + 1);
        }
        res.pop_back();
    }
}


int main(){
    cin >> n >> k;
    cin.ignore();
    getline(cin,s);
    stringstream ss(s);
    string w;
    while(ss >> w){
        se.insert(w);
    }
    for(auto i : se){
        v.push_back(i);
    }
    
    backtrack(0);
}