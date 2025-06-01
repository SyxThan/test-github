#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int dp[limit];
int n;

void solve(){
	dp[1] = 0;
	for(int i = 2;i < limit;i++){
		dp[i] = dp[i-1] + 1;
		if(i % 2 == 0) dp[i] = min(dp[i],dp[i/2] + 1);
		if(i % 3 == 0) dp[i] = min(dp[i],dp[i/3] + 1);
	}
}


int main(){
	int t;
	cin >> t;
	
	while(t--){
		solve();
		cin >> n;
		cout << dp[n] <<  endl;

	}

}

