#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool vs[100001];
vector<int> adj[100001];
int n,m;
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

int bfs(int u){
	vs[u] = true;
	int cnt = 1;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : adj[v]){
			if(!vs[x]){
				vs[x] = true;
				cnt++;
				q.push(x);
			}
		}
	}
	return cnt;
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		memset(vs,false,sizeof(vs));
		inp();
		int res = 0;
		for(int i = 1;i <= n;i++){
			if(!vs[i]){
				res = max(res,bfs(i));	
			}
		}
		cout << res << endl;
	}

}




