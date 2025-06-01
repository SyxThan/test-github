#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool vs[1001];
int m,n,s,t;
vector<int> adj[1001];
int parent[1001];

void inp(){
	cin >> n >> m >> s >> t;
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : adj[v]){
			if(!vs[x]){
				q.push(x);
				parent[x] = v;
				vs[x] = true;
			}
		}
	}
}
void inPath(int s, int t){
	if(!vs[t]){
		cout << -1;
	}
	else{
		vector<int> path;
		while(s != t){
			path.push_back(t);
			t = parent[t];
		}
		path.push_back(s);
		reverse(path.begin(),path.end());
		for(int x : path) cout << x << " ";
	}
	cout << endl;
}
int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int te;
	cin >> te;
	while(te--){
		for(int i = 1;i <= 1000;i++){
			adj[i].clear();
		}
		memset(vs,false,sizeof(vs));
		memset(parent,0,sizeof(parent));
		inp();
		bfs(s);
		inPath(s,t);
	}

}




