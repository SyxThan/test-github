#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int vs[100001];
vector<int> adj[100001];
int n,m,e;
void inp(){
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		adj[i].clear();
	}
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[y].push_back(x);
		adj[x].push_back(y);
	}
}

void dfs(int u){
	vs[u] = true;
	for(int v : adj[u]){
		if(!vs[v]){
			dfs(v);
		}
	}
}


void dinhtru(){
	// Dem so tplt ban dau
	int tplt = 0;
	for(int i = 1;i <= n;i++){
		if(!vs[i]){
			tplt++;
			dfs(i);
		}
	}
	vector<int> ans;
	for(int i = 1;i <= n;i++){
		memset(vs,false,sizeof(vs));
		vs[i] = true; // Loai bo dinh i
		int cnt = 0;
		for(int j = 1;j <= n;j++){
			if(!vs[j]){
				cnt++;
				dfs(j);
			}
		}
		if(cnt > tplt){
			ans.push_back(i);
		}
	}
	for(int x : ans){
		cout << x << " ";
	}
	cout << endl;
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		memset(vs,0,sizeof(vs));
		inp();
		dinhtru();
		
		
	}

}




