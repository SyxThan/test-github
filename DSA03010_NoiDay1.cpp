#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		priority_queue<int,vector<int>, greater<int>> pq;
		int n;
		cin >> n;

		for(int i = 0;i < n;i++){
			int x;
			cin >> x;
			pq.push(x);
		}
		ll ans = 0;
		while(pq.size() >= 2){
			int a = pq.top();pq.pop();
			int b = pq.top();pq.pop();
			ans += (ll)a+b;
			pq.push(a+b);
		}
		cout << ans << endl;

	}

}

