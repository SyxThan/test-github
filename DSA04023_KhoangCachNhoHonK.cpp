#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<int> a(n);
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		long long cnt = 0;
		int j = 0;
		for(int i = 0;i < n;i++){
			while(j < n && a[j] - a[i] < k ){
				j++;
			}
			cnt += j - i - 1;
		}
		cout << cnt << endl;

	}

}

