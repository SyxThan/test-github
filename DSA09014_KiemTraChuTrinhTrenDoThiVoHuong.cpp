#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int n,m;
vector<int> adj[1001];
bool vs[1001];
int parent[1001];

void inp(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

bool dfs(int u, int par){
	vs[u] = true;
	for(int v : adj[u]){
		if(!vs[v]){
			if(dfs(v,u)) return true;
		}
		else if(v != par) return true;
	}
	return false;
}


bool bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int v = q.front();q.pop();
		for(int x : adj[v]){
			if(!vs[x]){
				q.push(x);
				vs[x] = true;
				parent[x] = v;
			}
			else if(x != parent[v]) return true;
		}
	}
	return false;
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
		memset(parent,0,sizeof(parent));
		inp();
		bool ok = false;
		for(int i = 1;i <= n;i++){
			if(!vs[i] && dfs(i,0)){
				ok = true;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	
	}

}




