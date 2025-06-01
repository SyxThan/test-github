#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int n,m;
bool vs[100001];
vector<int> adj[100001];
int parent[100001];
vector<int> res;
int coCC;
void inp(){
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		adj[i].clear();
	}
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vs,false,sizeof(vs));
	res.clear();
}

void dfs(int u,int par){
	if(coCC) return;
	vs[u] = true;
	parent[u] = par;
	for(int v : adj[u]){
		if(coCC) return;
		if(!vs[v]){
			parent[v] = u;
			dfs(v,u);
		}
		else if(v != par){
			coCC = 1;
			vector<int> cycle;
			cycle.push_back(v);
			int cur = u;
			while(cur != v){
				cycle.push_back(cur);
				cur = parent[cur];
			}
			cycle.push_back(v);
			reverse(cycle.begin(),cycle.end());
			res = cycle;
			
		}
	}
}


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		inp();
		coCC = 0;
		dfs(1,-1);
		
		if(coCC && find(res.begin(),res.end(),1) != res.end()){
			for(int x : res){
				cout << x << " ";
			}
		}else cout << "NO";
		cout << endl;

	}

}




