#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


void solve(){
	ll p,q;
	cin >> p >> q;
	while(1){
		if(q % p == 0){
			cout << "1/" << q / p;
			return;
		}
		ll x = q/p + 1;
		cout << "1/" << x << " + ";
		p = p * x - q;
		q *= x;	
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}

}

