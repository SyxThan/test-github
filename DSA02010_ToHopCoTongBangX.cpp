#include<bits/stdc++.h>

using namespace std;


vector<int> a;
vector<vector<int>> result;
int n, ok, x;



void backtrack(int i, int sum, vector<int> &tmp){
    if(sum == x){
        ok = 1;
        result.push_back(tmp);
    }
    else{
        for(int j = i;j <= n;j++){
            sum += a[j];
            if(sum <= x){
                tmp.push_back(a[j]);
                backtrack(i,sum,tmp);
                sum -= a[j];
                tmp.pop_back();
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> x;
       for(int i = 1;i <= n;i++){
            cin >> a[i];
       }
        ok = 0;
        tryAt(1,0,1);
        
    }
}