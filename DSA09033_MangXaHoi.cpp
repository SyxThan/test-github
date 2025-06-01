#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int n,m;
bool vs[100001];
vector<int> adj[100001];
int sodinh, socanhx2;

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
}

void dfs(int u){
	vs[u] = true;
	sodinh++;
	socanhx2 += adj[u].size();
	for(int v : adj[u]){
		if(!vs[v]) dfs(v);
	}
}


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		inp();
		int ok = 1;
		for(int i = 1;i <= n;i++){
			if(!vs[i]){
				sodinh = 0;
				socanhx2 = 0;
				dfs(i);
				int socanh = socanhx2/2;
				if(socanh != sodinh*(sodinh - 1)/2){
					ok = 0;
					break;
				}
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;

	}

}




