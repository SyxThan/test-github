#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int F[n+1][n+1];
		s = "0" + s;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(i == j) F[i][j] = 1;
			}
		}
		int cnt = 1;
		// Xet cac xau con co do dai tu 2 den n
		for(int len = 2;len <= n;len++){
			for(int i = 1;i <= n - len + 1;i++){
				int j = i + len - 1;
				if(len == 2 && s[i] == s[j]) F[i][j] = 1;
				else {
					F[i][j] = F[i + 1][j - 1] && (s[i] == s[j]);
				}
				if(F[i][j] == 1) cnt = max(cnt,len);
			} 
		}
		cout << cnt << endl;
	}

}

