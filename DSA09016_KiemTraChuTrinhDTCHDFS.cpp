#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int n,m;
vector<int> adj[1001];
int vcl[1001];
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

void dfs(int u){
	vcl[u] = 1;
	for(int v : adj[u]){
		if(vcl[v] == 0){
			dfs(v);
		}
		else if(vcl[v] == 1) coCC = 1;
	}
	vcl[u] = 2;
}


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		for(int i = 1;i <= n;i++){
			adj[i].clear();
		}
		memset(vcl,0,sizeof(vcl));
		inp();
		coCC = 0;
		for(int i = 1;i <= n;i++){
			if(!vcl[i]){
				dfs(i);
			}
		}
		if(coCC) cout << "YES" << endl;
		else cout << "NO" << endl;
	
	}

}




