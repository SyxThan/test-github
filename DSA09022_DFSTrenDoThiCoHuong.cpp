#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int m,n,u;
vector<int> adj[1001];
bool vs[1001];

void inp(){
	cin >> n >> m >> u;
	for(int i = 0;i < m;i++){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	for(int i = 1;i <= n;i++){
		sort(adj[i].begin(),adj[i].end());
	}
}

void dfs(int u){
	cout << u << " ";
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
		dfs(u);
		cout << endl;

	}

}



