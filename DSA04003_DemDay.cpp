#include<bits/stdc++.h>
#define ll long long
#define limit 1000000

using namespace std;

const int MOD = 123456789;

long long pow(long long n, long long k){
	if(k == 0) return 1;
	if(k == 1) return n % MOD;
	long long x = pow(n, k / 2);
	if(k % 2 == 1) return  (x % MOD * x % MOD * n % MOD) % MOD;
	else return (x % MOD * x % MOD) % MOD;
}
long long npow(long long n, long long k){
	long long res = 1;
	while(k > 0){
		if(k % 2 == 1){
			res *= n;
			res %= MOD;
		}
		n *= n;
		n %= MOD;
		k /= 2;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		// so day tao duoc la 2 ^ n - 1
		cout << npow(2,n-1) << endl;
	}

}

