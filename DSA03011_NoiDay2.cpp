#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
#define BASE 1000000007
using namespace std;


// Su dung long long
// Tong 2 so phai chia cho mod
// Tong chi phi cung phai chia cho mod
int main(){
	int t;
	cin >> t;
	while(t--){
		priority_queue<ll,vector<ll>,greater<ll>> pq;
		int n;
		cin >> n;
		for(int i = 0;i < n;i++){
			int x;
			cin >> x;
			pq.push(x);
		}
		ll ans = 0;
		while(pq.size() >= 2){
			int a = pq.top();
			pq.pop();
			int b = pq.top();
			pq.pop();
			ll sum = (a+b) % BASE;
			// Chia mod
			ans = (ans + sum) % BASE;
			pq.push(sum);
		}
		cout << ans << endl;

	}

}

