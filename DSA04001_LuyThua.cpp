#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
#define MOD 1000000007
using namespace std;

ll pow(ll n,ll k){
	ll res = 1;
	while(k > 0){
		// Neu k le thi nhan res voi n roi lay MOD
		if(k % 2 == 1){
			res *= n;
			res %= MOD;
		}
		// Luon luon lay n binh phuong
		n*=n;
		// Chia du n cho MOD
		n %= MOD;
		// Sau do giam k di 2 lan
		k /= 2;
	}	
	return res;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout <<  pow(n,k) << endl;
	}

}

