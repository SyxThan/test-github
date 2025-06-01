#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> parent;
vector<int> cycle;
bool found = false;

void dfs(int u, int par) {
    if (found) return;
    visited[u] = true;
    for (int v : adj[u]) {
        if (found) return;
        if (!visited[v]) {
            parent[v] = u;	
            dfs(v, u);
        } else if (v != par) {
        	found = true;
            vector<int> path;
            int cur = u;
            path.push_back(cur);
            while (cur != v) {
                cur = parent[cur];
                path.push_back(cur);
            }
            reverse(path.begin(), path.end());
            path.push_back(u);
            cycle = path;
            return;
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        adj.assign(n + 1, vector<int>());
        visited.assign(n + 1, false);
        parent.assign(n + 1, 0);
        cycle.clear();
        found = false;
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, -1);
        if (cycle.empty()) {
            cout << "NO\n";
        } else {
            for (int x : cycle) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
