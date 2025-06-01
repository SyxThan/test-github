#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first == b.first) return a.first > b.first;
	else return a.second > b.second;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<pair<int,int>> a(n);
		int x;
		int m = -1;
		for(int i = 0;i < n;i++){
			cin >> x;
			cin >> a[i].first >> a[i].second;
			m = max(m,a[i].first);
		}
		sort(a.begin(),a.end(),cmp);
		vector<int> dd(m+1,0);
		int cnt = 0;
		int res = 0;
		for(int i = 0;i < n;i++){
			for(int j = a[i].first;j >= 1;j--){
				if(dd[j] == 0){
					cnt++;
					res += a[i].second;
					dd[j] = 1;
					break;
				}
			}
		}
		cout << cnt << " " << res << endl;
		
	}

}

