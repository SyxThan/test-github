#include<bits/stdc++.h>
#define ll long long
#define	MOD 1000000007
using namespace std;

long long POWER(long long a, long long b){
	if(b == 0) return 1;
	if(b == 1) return a % MOD;
	long long x = POWER(a,b/2);
	if(b % 2 == 1) return ((a % MOD) *(x % MOD) * (x % MOD)) % MOD;
	else return ((x % MOD) * (x % MOD)) % MOD;
}


long long nPOW(long long a,long long b){
	long long res = 1;
	while(b != 0){
		if(b % 2 == 1) {
			res *= a;
			res %= MOD;
		}
		a *= a;
		a %= MOD;
		b /= 2;
	}
	return res;
}
int main(){
	long long a,b;
	while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        cout << nPOW(a, b) << endl;
    }

}

