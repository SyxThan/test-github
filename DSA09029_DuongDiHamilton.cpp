#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,m;
vector<int> adj[1001];
bool vs[1001];
bool ok;
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
	memset(vs,false,sizeof(vs));
}


void hamilton(int u, int cnt){
	if(cnt == n){
		ok = true;
	}
	if(ok) return;
	for(int v : adj[u]){
		if(!vs[v]){
			vs[v] = true;
			hamilton(v,cnt + 1);
			vs[v] = false;
		}
	}
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		inp();
		ok = false;
		for(int i = 1;i <= n;i++){
			memset(vs,false,sizeof(vs));
			vs[i] = true;
			hamilton(i,1);
			if(ok) {
				break;
			}
		}
		if(ok) cout << 1 << endl;
		else cout << 0 << endl;

	}

}




