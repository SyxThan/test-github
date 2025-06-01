#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<int> state; // 0: chua tham, 1: dang tham, 2: dã xong
vector<int> parent;
vector<int> cycle;
bool found = false;

void dfs(int u) {
    if (found) return;
    state[u] = 1;
    for (int v : adj[u]) {
        if (found) return;
        if (state[v] == 0) {
            parent[v] = u;
            dfs(v);
        } else if (state[v] == 1) {
            // Tìm th?y chu trình
            vector<int> path;
            int cur = u;
            path.push_back(cur);
            while (cur != v) {
                cur = parent[cur];
                path.push_back(cur);
            }
            path.push_back(v);
            reverse(path.begin(), path.end());
            cycle = path;
            found = true;
            return;
        }
    }
    state[u] = 2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        adj.assign(n + 1, vector<int>());
        state.assign(n + 1, 0);
        parent.assign(n + 1, 0);
        cycle.clear();
        found = false;
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v); // ch? 1 chi?u
        }
        dfs(1);
        if (cycle.empty()) {
            cout << "NO\n";
        } else {
            for (int x : cycle) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
