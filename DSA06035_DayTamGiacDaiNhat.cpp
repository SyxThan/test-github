#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		int ans = -1;
		for(int i = 1;i < n - 1;i++){
			int l = i - 1, r = i + 1;
			while(l > 0 && a[l] <= a[i]){
				a[i] = a[l];
				l--;
			}
			while(r < n - 2 && a[r] <= a[i]){
				a[i] = a[r];
				r++;
			}
			ans = max(ans,r - l + 1);
		}
		cout << ans << endl;
	}

}

