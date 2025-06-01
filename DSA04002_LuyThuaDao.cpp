#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
#define MOD 1000000007
using namespace std;

long long reverse(long long n){
	long long k = 0;
	while(n > 0){
		k = k * 10 + n % 10;
		n /= 10;
	}
	return k;
}

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

long long bin_pow(long long n, long long k)
{
    if (k == 1)
        return n % MOD;
    // Goi de quy toi k/2
    long long x = bin_pow(n, k / 2);
	if(k % 2 == 1) return n*(x * x % MOD) % MOD;
	else return x * x % MOD;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long k = reverse(n);
		cout << bin_pow(n,k) << endl;

	}

}

