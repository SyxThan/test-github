#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool vs[100001];
vector<int> adj[100001];
int parent[10001];
int n;


void inp(){
	cin >> n;
	for(int i = 0;i < n - 1;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void bfs(int u){
	vs[u] = true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : adj[v]){
			if(!vs[x]){
				vs[x] = true;
				parent[x] = v;
				q.push(x);
				
			}
		}
	}
}


void inPath(int s, int t){
	vector<int> path;
	while(s != t){
		path.push_back(t);
		t = parent[t];
	}
	path.push_back(s);
	reverse(path.begin(),path.end());
	for(int x : path){
		cout << x << " ";
	}
	cout << endl;
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
		memset(parent,0,sizeof(parent));
		inp();
		bfs(1);
		for(int i = 1;i <= n;i++){
			if(s != i){
				inPath(s,i);
			}
		}


	}

}




