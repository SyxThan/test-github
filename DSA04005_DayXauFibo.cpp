#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


long long fb[93];
void fibo(){
	fb[1] = 1;
	fb[2] = 1;
	for(int i = 3;i < 93;i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
}

char solve(long long n, long long i){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	// i <= n - 2 thuoc phan dau 
	if(i <=  fb[n-2]) return solve(n - 2,i);
	// i > n - 2 thuoc phan sau va phai tim cho i - fb[n-2]
	else return solve(n - 1,i - fb[n-2]);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, i;
		cin >> n >> i;
		fibo();
		cout << solve(n,i) << endl;

	}

}

