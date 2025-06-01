#include <bits/stdc++.h>
using namespace std;

int n, p,s;
vector<int> pr;
vector<vector<int>> res;
vector<int> cur;


int nto(int n){
	for(int i = 2;i*i <= n;i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

void init() {
    cin >> n >> p >> s;
    pr.clear();
    for(int i = 0;i <= s;i++){
    	if(nto(i) && i > p) pr.push_back(i);
	}
	
}

void Try(int idx, int sum) {
    if(cur.size() > n || sum > s) return;
    if(cur.size() == n && sum == s){
		res.push_back(cur);
	}
	for(int i = idx;i < pr.size();i++){
		cur.push_back(pr[i]);
		Try(i+1,sum + pr[i]);
		cur.pop_back();
	}
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        init();
        res.clear();
        cur.clear();
    	Try(0,0);
    	sort(res.begin(),res.end());
    	cout << res.size() << endl;
    	for(int i = 0;i < res.size();i++){
    		for(auto x : res[i]){
    			cout << x << " ";
			}
			cout << endl;
		}
    }
}

