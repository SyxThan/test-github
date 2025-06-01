#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<ll> res;
		while(1){
			string top = q.front();
			q.pop();
			if(top.size() > n) break;
			res.push_back(stoll(top));
			q.push(top + "6");
			q.push(top + "8");
		}
		sort(res.begin(),res.end(),greater<ll> ());
		cout << res.size() << endl;
		for(ll it : res){
			cout << it << " ";
		}
		cout << endl;
	}

}


