#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,k;
vector<int> a;
vector<int> cur;
vector<vector<int>> res;


void init(){
	cin >> n >> k;
	a.resize(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	sort(a.begin(),a.end());
}

void Try(int idx){
	if(cur.size() == k){
		res.push_back(cur);
	}
	for(int i = idx;i < n;i++){
		cur.push_back(a[i]);
		Try(i+1);
		cur.pop_back();
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		cur.clear();
		res.clear();
		Try(0);
		for(int i = 0;i < res.size();i++){
			for(int j = 0;j < res[i].size();j++){
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}

}

