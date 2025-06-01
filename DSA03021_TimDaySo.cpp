#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int &x : A) cin >> x;

    int minSum = INT_MAX;

    // x la gia tri floor < chon gia tri cua x >
    for (int x = 2000; x >= 1; --x) {
        vector<int> B(N);
        bool ok = true;
        int sum = 0;

        for (int i = 0; i < N; ++i) {
            B[i] = A[i] / (x + 1) + 1;
            if (B[i] <= 0 || (A[i] / B[i]) != x) {
                ok = false;
                break;
            }
            sum += B[i];
        }

        if (ok) {
            minSum = sum;
            break;  
        }
    }

    cout << minSum << "\n";
    return 0;
}
