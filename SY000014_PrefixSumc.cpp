#include<bits/stdc++.h>

using namespace std;

vector<int> prefix(vector<int> a){
    vector<int> prefixSum(a.size());
    prefixSum[0] = a[0];
    for(int i = 1;i < a.size();i++){
        prefixSum[i] = prefixSum[i-1] + a[i];
    }
    return prefixSum;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    vector<int> ans = prefix(a);
    int l,r;
    cin >> l >> r;
    cout << ans[r] - ans[l - 1] << endl;
}