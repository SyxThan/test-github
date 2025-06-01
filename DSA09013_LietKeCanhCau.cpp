#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool vs[1001];
int n,m;
vector<int> adj[1001];
vector<pair<int,int>> dscanh;

void inp(){
	cin >> n >>m;
	for(int i = 1;i <= n;i++){
		adj[i].clear();
	}
	dscanh.clear();
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[y].push_back(x);
		adj[x].push_back(y);
		dscanh.push_back({x,y});
	}
}

void dfs2(int u, int s, int t){
	vs[u] = true;
	for(int v : adj[u]){
		if((s == u && t == v) || (s == v && t == u)) continue;
		if(!vs[v]){
			dfs2(v,s,t);
		}
	}
}


void canhcau(){
	vector<pair<int,int>> ans;
	for(auto it : dscanh){
		int a = it.first;
		int b = it.second;
		memset(vs,false,sizeof(vs));
		int cnt = 0;
		for(int j = 1;j <= n;j++){
			if(!vs[j]){
				cnt++;
				dfs2(j,a,b);
			}
		}
		if(cnt > 1){
			if(a > b) {
				int t = a;
				a = b;
				b = t;
			}
			ans.push_back({a,b});	
		}
	}
	for(auto it : ans){
		cout << it.first << " " << it.second << " ";
	}
	cout << endl;
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		memset(vs,false,sizeof(vs));
		inp();
		canhcau();

	}

}




