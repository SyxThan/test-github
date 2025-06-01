#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


bool vs[1001];
int m, n;
vector<int> adj[1001];
int parent[1001];
vector<int> cycle;
bool found;

void inp(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void dfs(int u, int par){
	if(found) return; 
	vs[u] = true;
	for(int v : adj[u]){
		if(found) return;
		if(!vs[v]){
			parent[v] = u;
			dfs(v,u);
		}
		else if(v != par){
			found = true;
			cycle.push_back(v);
			int cur = u;
			while(cur != v){
				cycle.push_back(cur);
				cur = parent[cur];
			}
			cycle.push_back(v);
			reverse(cycle.begin(),cycle.end());
			return;
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
		memset(parent,0,sizeof(parent));
		cycle.clear();
		inp();
		found = false;
		dfs(1,0);#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> parent;
vector<int> path;
bool found;

void dfs(int u, int par) {
    if (found) return;
    visited[u] = true;
    for (int v : adj[u]) {
        if (v == par) continue;
        if (!visited[v]) {
            parent[v] = u;
            dfs(v, u);
            if (found) return;
        } else {
            // Chu trình phát hi?n
            found = true;
            path.push_back(v);
            int cur = u;
            while (cur != v) {
                path.push_back(cur);
                cur = parent[cur];
            }
            path.push_back(v);
            reverse(path.begin(), path.end());
            return;
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        adj.assign(n + 1, vector<int>());
        visited.assign(n + 1, false);
        parent.assign(n + 1, 0);
        path.clear();
        found = false;
        vector<pair<int, int>> edges(m);
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, 0);
        if (found) {
            for (int i = 0; i < path.size(); ++i) {
                cout << path[i];
                if (i + 1 < path.size()) cout << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
		if(found){
			for(int x : cycle){
				cout << x << " ";
			}
		}else cout << "NO";
		cout << endl;

	}

}




