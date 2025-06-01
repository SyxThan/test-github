	#include<bits/stdc++.h>
	#define ll long long
	#define limit 1000000
	using namespace std;
	
	// Time : O(1)
	// Space : O(n*m)
	
	int main(){
		int t;
		cin >> t;
		while(t--){
			int n, m;
			cin >> n >> m;
			vector<int> w(n + 1);
			vector<int> v(n + 1);
			for(int i = 1;i <= n;i++){
				cin >> w[i];
			}
			for(int i = 1;i <= n;i++){
				cin >> v[i];
			}
			vector<vector<int>> f(n+1,vector<int>(m+1));
			for(int i = 1;i <= n;i++){
				// j la suc chua cua tui dang xet
				for(int j = 1;j <= m;j++){
					if(j >= w[i]){
						f[i][j] = max(f[i-1][j - w[i]] + v[i],f[i-1][j]);
					}
					else f[i][j] = f[i-1][j];
				}
			}
			cout << f[n][m] << endl;
		
		}
	
	}

