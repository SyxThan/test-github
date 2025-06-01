#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,k,s;
vector<int> cur;
vector<vector<int>> res;

void Try(int idx,int sum){
	if(cur.size() == k && sum == s){
		res.push_back(cur);
	}
	if(sum > s) return;
	for(int i = idx;i <= n;i++){
		cur.push_back(i);
		Try(i+1,sum + i);
		cur.pop_back();
		
	}
}


int main(){
	while(true){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0){
			break;
		} 
		cur.clear();
		res.clear();
		Try(1,0);
		cout << res.size() << endl;
	}

}

