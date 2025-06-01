#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n;
vector<int> a;
vector<int> cur;
vector<vector<int>> res;


void init(){
	cin >> n;
	cur.clear();
	res.clear();
}

void Try(int idx,int remain){
	if(remain == 0){
		res.push_back(cur);
	}
	for(int i = idx;i > 0;i--){
		if(remain >= i){
			cur.push_back(i);
			Try(i,remain - i);
			cur.pop_back();
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		Try(n,n);
		cout << res.size() << endl;
		for(int i = 0;i < res.size();i++){
			cout << "(";
			for(int j = 0;j < res[i].size();j++){
				cout << res[i][j];
				if(j != res[i].size() - 1) cout << " ";
			}
			cout << ") ";
		}
		cout << endl;
	}
}

