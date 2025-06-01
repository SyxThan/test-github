#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

// Ki tu chinh giua cua xau luon la ki tu thu N

char solve(int n,int k){
	long long mid = 1LL << (n - 1);
	if(k == mid) return n - 1 + 'A';
	else if(k < mid) return solve(n - 1,k);
	else return solve(n - 1,k - mid);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << solve(n,k) << endl;
	}

}

