#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T; 
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        
        vector<int> max_right(n);
        max_right[n-1] = a[n-1];
        // Tao mot mang max tu ben phai sang [80 80 80 80 33 33 1]

       	for (int i = n - 2; i >= 0; i--) max_right[i] = max(max_right[i+1],a[i]);
        int i = 0, j = 1;
        
        int ans = -1;
        
        // So sanh voi mang ban dau [34 8 10 80 33 32 1]
        while(i < n && j < n){
        	if(max_right[j] > a[i]){
        		ans = max(ans,j - i);
        		j++;
			}else i++;
		}
		cout << ans << endl;
    }
    return 0;
}
