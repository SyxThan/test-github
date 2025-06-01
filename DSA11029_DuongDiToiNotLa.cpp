#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


vector<int> adj[1001];
int used[1001];
int pre[1001]; // De luu lai duong di
int n;
vector<int> leaf;
void inp(){
	cin >> n;
	for(int i = 0;i < n - 1;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	// Tim not la cho vao leaf
	for(int i = 1;i <= n;i++){
		if(adj[i].size() == 1){
			leaf.push_back(i);
		}
	}
}

void dfs(int u){
	used[u] = true;
	for(int v : adj[u]){
		if(!used[v]){
			pre[v] = u;
			dfs(v);
		}
	}
}

void PATH(int u, int v){
	vector<int> path;
	while(v != u){
		path.push_back(v);
		v = pre[v];
	}
	path.push_back(1);
	reverse(path.begin(),path.end());
	for(int x : path){
		cout << x << " ";
	}
	cout << endl;
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		inp();
		memset(used,0,sizeof(used));
		dfs(1);
		for(int x : leaf){
			PATH(1, x);
		}
		for(int i = 1;i <= n;i++) adj[i].clear();
		leaf.clear();
	}

}


