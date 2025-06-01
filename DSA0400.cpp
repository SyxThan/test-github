#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
#define MOD 1000000007
using namespace std;

long long pow(long long n, long long k){
	if(k == 1) return n % MOD;
	long long x = pow(n,k/2);
	if(k % 2 == 1) return (n * x * x % MOD) % MOD;
	else return x * x % MOD;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << pow(2,n-1) << endl;
	}

}

