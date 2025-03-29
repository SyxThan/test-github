#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int main(){
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int maxi = max_element(a.begin(),a.end()) - a.begin();
	cout << maxi << " " << a[maxi] << endl;
	

}

