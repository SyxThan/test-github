#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool vs[1001];
vector<int> adj[1001];
int parent[1001];
int n,m,s,t;

void inp(){
    cin >> n >> m >> s >> t;
    for(int i = 0;i < m;i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
}

void dfs(int u){
    vs[u] = true;
    for(int v : adj[u]){
        if(!vs[v]){
            parent[v] = u;
            dfs(v);
        }
    }
}

void inPath(int s,int t){
    if(vs[t] == false){
        cout << -1;
    }
    else{
        vector<int> path;
        while(t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(),path.end());
        for(int it : path) cout << it << " ";
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
            vs[i] = false;
            parent[i] = 0;
        }
		inp();
		dfs(s);
		inPath(s,t);
	}

}



