#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

vector<int> adj[1001];
int m,n,u;
int visited[1001];

void inp(){
	cin >> n >> m >> u;
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, 0, sizeof(visited));
}

void DFS(int u){
	cout << u << " ";
	visited[u] = 1;
	for(int v : adj[u]){
		if(!visited[v]) {
			DFS(v);
		}
	}
	
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		inp();
		DFS(u);
        for(int i = 1; i <= n; i++) {
            adj[i].clear();
        }
		cout << endl;
	}

}


