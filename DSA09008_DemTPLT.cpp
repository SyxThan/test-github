#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,m;
bool vs[1001];
vector<int> adj[1001];

void inp(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void dfs(int u){
	vs[u] = true;
	for(int v : adj[u]){
		if(!vs[v]){
			dfs(v);
		}
	}
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		for(int i = 1;i <= n;i++){
			adj[i].clear();
		}
		memset(vs,false,sizeof(vs));
		inp();
		int cnt = 0;
		for(int i = 1;i <= n;i++){
			if(!vs[i]){
				dfs(i);
				cnt++;
			}
		}
		cout << cnt << endl;

	}

}




