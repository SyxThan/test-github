#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int n,m;
vector<int> adj[1001];
bool vs[1001];
int parent[1001];
int coCC;

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
	vs[u] = true;
	for(int v : adj[u]){
		if(!vs[v]){
			dfs(v,u);
		}
		else if(v != par) coCC = 1;
	}
}


void bfs(int u){
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
			else if(x != parent[v]) coCC = 1;
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
		inp();
		coCC = 0;
		for(int i = 1;i <= n;i++){
			if(!vs[i]){
				//dfs(i,0);
				 bfs(i);
			}
		}
		if(coCC) cout << "YES" << endl;
		else cout << "NO" << endl;
	
	}

}




