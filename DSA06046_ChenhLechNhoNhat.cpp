#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int minDiff = INT_MAX;
        for (int i = 1; i < n; ++i) {
            minDiff = min(minDiff, a[i] - a[i - 1]);
        }
        cout << minDiff << endl;
    }
    return 0;
}