#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
       	int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        int res = 1e9;
        int ans;
        for(int i = 0;i < n;i++){
        	for(int j = i + 1;j < n;j++){
        		ans = a[i] + a[j];
        		if(abs(ans) < abs(res)) res = ans;
			}
		}
        cout << res << endl;
    }
    return 0;
}
