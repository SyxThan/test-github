#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;
vector<int> v;
bool ok;

void init() {
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ok = false;
}

void Try(int idx, int sum) {
    if (sum == x) {
        ok = true;
        cout << "[";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i < v.size() - 1) cout << " ";
        }
        cout << "]";
        return;
    }
    for (int i = idx; i < n; i++) {
        if (sum + a[i] <= x) {
            v.push_back(a[i]);
            Try(i, sum + a[i]);  // cho phép dùng lại a[i]
            v.pop_back();
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        init();
        Try(0, 0);
        if (!ok) cout << -1;
        cout << endl;
    }
}
