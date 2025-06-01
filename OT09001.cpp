#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,m;
vector<int> adj[1001];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		for(int i = 0;i < m; i++){
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i = 1;i <= n; i++){
			cout << i << ": ";
            for(int j = 0;j < adj[i].size();j++){  
                cout << adj[i][j] << " ";       
            }
            cout << endl;
		}
		for(int i = 0;i < 10000;i++){ 
            adj[i].clear();
        }
	}
}


