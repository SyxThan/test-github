#include<bits/stdc++.h>

using namespace std;

int main(){
   
        int n,m;
        cin >> n >> m;
        vector<int> a1(n);
        vector<int> a2(m);
        vector<int> ans;
        int cnt[10000];
        int ma = -1e9;
        for(int i = 0;i < n;i++){
            cin >> a1[i];
            ma = max(ma,a1[i]);
            cnt[a1[i]]++;
        }
        for(int i = 0;i < m;i++){
            cin >> a2[i];
        }   
        for(int i = 0;i < m;i++){
            while(cnt[a2[i]] > 0){
                ans.push_back(a2[i]);
                cnt[a2[i]]--;
            }
        }
        for(int i = 0;i <= ma;i++){
            while(cnt[i] > 0){
                ans.push_back(i);
                cnt[i]--;
            }
        }
        for(int i = 0;i < ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        
    
}
