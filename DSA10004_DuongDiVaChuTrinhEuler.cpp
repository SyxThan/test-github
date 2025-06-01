#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,m;
vector<int> adj[1001];
int degree[1001];
void inp(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		degree[x]++;
		degree[y]++;
	}
}


void solve(){
	int bacle = 0;
	for(int i = 1;i <= n;i++){
		if(degree[i] % 2 == 1){
			bacle++;
		}
	}
	if(bacle == 0) {
		cout << 2 << endl;
	}else if(bacle == 2){
		cout << 1 << endl;
	}else cout << 0 << endl;
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		for(int i = 1;i <= n;i++){
			adj[i].clear();
			degree[i] = 0;
		}
		inp();
		solve();

	}

}




