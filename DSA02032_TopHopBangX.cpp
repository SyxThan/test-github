#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;
vector<vector<int>> res;
vector<int> cur;


void init() {
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
}

void Try(int idx, int sum) {
    if(sum == x){
    	res.push_back(cur);
    	return;
	}
	for(int i = idx;i < n;i++){
		if(sum + a[i] <= x){

			cur.push_back(a[i]);
			Try(i,sum + a[i]);
			cur.pop_back();
		}
	}
   
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        init();
        res.clear();
        cur.clear();
        Try(0, 0);
        if (res.size() == 0) cout << -1;
        else {
        	cout << res.size() << " ";
			for(int i = 0;i < res.size();i++){
				cout << "{";
				for(int j = 0;j < res[i].size();j++) {
					cout << res[i][j];
					if(j != res[i].size() - 1) cout << " ";
				}
				cout << "} ";
			}
		}
        cout << endl;
    }
}
