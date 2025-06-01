#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int k;
        string s;
        cin >> k >> s;

        int freq[26] = {0};

        for (char c : s) {
            freq[c - 'A']++;
        }

        while (k--) {
            // Tim so co tan so lon nhat
            int max_idx = 0;
            for (int i = 1; i < 26; i++) {
                if (freq[i] > freq[max_idx]) {
                    max_idx = i;
                }
            }
            // Giam di 1
            if (freq[max_idx] > 0) freq[max_idx]--;
        }

       
        long long res = 0;
        for (int i = 0; i < 26; i++) {
            res += 1LL * freq[i] * freq[i];
        }

        cout << res << "\n";
    }

    return 0;
}

