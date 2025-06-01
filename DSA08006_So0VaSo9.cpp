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
		string s;
		queue<ll> q;
		q.push(9);
		while(1){
			ll s = q.front();
			if(s % n == 0){ 
				cout << s << endl;
				break;
			}
			q.pop();
			q.push(s*10);
			q.push(s*10 + 9);
		}

	}

}


