#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int vs[100001];
vector<int> adj[100001];
int n,m,e;
void inp(){
	cin >> n >> m >> e;
	for(int i = 1;i <= n;i++){
		adj[i].clear();
	}
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[y].push_back(x);
		adj[x].push_back(y);
	}
}

void dfs(int u,int par){
	vs[u] = vs[par] + 1;
	for(int v : adj[u]){
		if(vs[v] == 0){
			dfs(v,u+1);
		}
	}
}


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		memset(vs,0,sizeof(vs));
		inp();
		for(int i = 1;i <= n;i++){
			if(vs[i] == 0){
				dfs(i,0);
			}
		}
		int res = 0;
		for(int i = 1;i <= n;i++){
			res = max(res,vs[i]);
		}
		if(res <= e) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		
	}

}




