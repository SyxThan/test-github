#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<ll> a(n);
		vector<ll> b(n);
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		for(int i = 0;i < n - 1;i++){
			cin >> b[i];
		}
		int res = n;
		for(int i = 0;i < n - 1;i++){
			if(a[i] != b[i]) {
				res = i + 1;
				break;
			}
		}
		cout << res << endl;
	}

}

