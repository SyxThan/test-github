#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool vs[100001];
vector<int> adj[100001];
int height[100001];
int n;


void inp(){
	cin >> n;
	for(int i = 0;i < n - 1;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void dfs(int u, int par){
	vs[u] = true;
	height[u] = height[par] + 1;
	for(int v : adj[u]){
		if(!vs[v]) dfs(v,u);
	}
}

void bfs(int u){
	height[u] = 0;
	vs[u] = true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : adj[v]){
			if(!vs[x]){
				vs[x] = true;
				height[x] = height[v] + 1;
				q.push(x);
				
			}
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
			height[i] = 0;
		}
		memset(vs,false,sizeof(vs));
		inp();
		bfs(1);
		int h = 0;
		for(int i = 1;i <= n;i++){
			h = max(h,height[i]);
		}
		cout << h << endl;


	}

}




