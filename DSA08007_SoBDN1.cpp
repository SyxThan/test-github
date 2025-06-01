#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

vector<ll> bdn;
void init(){
	queue<ll> q;
	q.push(1);
	while(1){
		ll top = q.front();
		q.pop();
		if(top >= LLONG_MAX){
			break;
		}
		bdn.push_back(top);
		q.push(top*10 + 0);
		q.push(top*10 + 1);
	}
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	init();
	while(t--){
		int n;
		cin >> n;
		int cnt = 0;
		for(auto it : bdn){
			if (it <= n) cnt++;
			else break;
		}
		cout << cnt << endl;

	}

}


