#include <bits/stdc++.h>
using namespace std;

int a[1000], n, k, final, r;
set<int> tmp;
vector<int> res;
vector<int> b;
void ktao(){
    for(int i = 0;i < n;i++){
        cin >> a[i];
        tmp.insert(a[i]);
    }
    for(auto i : tmp){
        b.push_back(i);
    }
}



void backtrack(int i){
    for(int j = i;j < b.size();j++){
        res.push_back(b[j]);
        if(res.size() == k) {
            for(int i = 0;i < k;i++){
                cout << res[i] << " ";
            }
            cout << endl;
        } else backtrack(j+1);
        res.pop_back();
    }
}

int main()
{
    cin >> n >> k;
    ktao();
    backtrack(0);
}