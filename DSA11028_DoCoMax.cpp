#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int n,m;
vector<int> adj[1001];
int vs[1001];
bool ok;
int height[1001];


void inp(){
	cin >> n;
	for(int i = 0;i < n-1;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void dfs(int u,int h){
	vs[u] = 1;
	height[u] = h;
	for(int v : adj[u]){
		if(vs[v] == 0){
			dfs(v,h+1);
		}
	}
}


void bfs(int u){
	vs[u] = 1;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : adj[v]){
			if(vs[x] == 0){
				q.push(x);
				vs[x] = 3 - vs[v];
			}else if(vs[x] == vs[v]){
				ok = false;
				break;
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
		}
		memset(vs,0,sizeof(vs));
		inp();
		dfs(1,0);
		for(int i = 1;i <= n;i++){
			cout << height[i] << " ";
		}
	
	}

}




