#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
#define MOD 1000000007
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int dp[1001][1001];
		for(int i = 0;i <= n;i++){
			for(int j = 0;j <= i;j++){
				if(i == j || j == 0) dp[i][j] = 1;
				else dp[i][j] = (dp[i-1][j-1] + dp[i - 1][j]) % MOD;
			}
		}
		cout << dp[n][k] << endl;

	}

}

