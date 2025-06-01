#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

long long solve(long long n,long long k){
	// Vi tri o giua luon la n
	long long mid = 1LL << (n - 1);
	if(k == mid) return n;
	// Vi tri o giua cua ben phai, trai la n - 1
	else if(k < mid) return  solve(n - 1, k);
	else return solve(n - 1,k - mid);
}


int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << solve(n,k) << endl;
		
	}

}

