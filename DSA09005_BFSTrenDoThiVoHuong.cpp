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
		adj[y].push_back(x);
	}
	for(int i = 1;i <= n;i++){
		sort(adj[i].begin(),adj[i].end());
	}
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout << v << " ";
		for(int x : adj[v]){
			if(!vs[x]){
				q.push(x);
				vs[x] = true;
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
		memset(vs,false,sizeof(vs));
		inp();
		bfs(u);
		cout << endl;



	}

}




