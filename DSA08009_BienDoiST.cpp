#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

ll dp[limit] = {0};

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n>> m;
		queue<ll> q;
		q.push(n);
		memset(dp,0,sizeof(dp));
		while(!q.empty()){
			ll x = q.front();
			q.pop();
			if(x == m) {
				cout << dp[x] << endl;
				break;
			}
			if(x * 2 <= 1e6 && dp[x*2] == 0){
				dp[x*2] = dp[x] + 1;
				q.push(x * 2);
			}
			if(x - 1 >= 1 && dp[x-1] == 0){
				dp[x-1] = dp[x] + 1;
				q.push(x-1);
			}
		}
	}

}


