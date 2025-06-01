#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool cmp(const pair<int,int> a,const pair<int,int> b){
	if(a.first == b.first) return a.first > b.first;
	else return a.second > b.second;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x;
		vector<pair<int,int>> a(n);
		for(int i = 0;i < n;i++){
			cin >> x;
			cin >> a[i].first >> a[i].second;
		}
		sort(a.begin(),a.end(),cmp);
		vector<bool> dd(1000,0);
		int cnt = 0;
		int res = 0;
		for(int i = 0;i < n;i++){
			for(int j = a[i].first;j >= 1;j--){
				if(!dd[j]){
					cnt++;
					res += a[i].second;
					dd[j] = 1;
				}
			}
		}
		cout << cnt << " " << res << endl;	

	}

}

