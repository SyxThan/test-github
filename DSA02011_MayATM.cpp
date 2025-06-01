#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

long long n,k;
vector<int> a;
vector<int> cur;
int kq = INT_MAX;

void init(){
	cin >> n >> k;
	a.resize(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	sort(a.begin(),a.end());
}

void Try(int idx,long long sum){
	if(sum == k){
		kq = min(kq,(int)cur.size());
		return;
	}
	if (sum > k || idx == n) return;
	for(int i = idx;i < n;i++){
			if(i > idx && a[i] == a[i-1]) continue;
			cur.push_back(a[i]);
			Try(i+1,sum + a[i]);
			cur.pop_back();
		
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		cur.clear();
		Try(0,0);
		if(kq == INT_MAX) cout << -1 << endl;
		else cout << kq << endl;
	}
}
