#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool vs[1001];
vector<int> adj[1001];
int n;
int coCC;
int coLT;
void inp(){
	cin >> n;
	for(int i = 0;i < n - 1;i++){
		int x, y;
		cin >> x >> y;
		adj[y].push_back(x);
		adj[x].push_back(y);
	}
}


void dfs(int u, int par){
	vs[u] = true;
	for(int v : adj[u]){
		if(!vs[v]){
			dfs(v,u);
		}else if(v != par){
			coCC = 1;
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
		coCC = 0;
		coLT = 1;
		dfs(1,0);
		for(int i = 1;i <= n;i++){
			if(!vs[i]){
				coLT = 0;
				break;
			}
		}
		if(coLT == 1 && coCC == 0) cout << "YES" << endl;
		else cout << "NO" << endl;

	}

}




