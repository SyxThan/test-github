#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s;
        cin >> s;
        bool found = false;


        for (int i = s / 7; i >= 0; i--) {
            int remain = s - i * 7;
            if (remain % 4 == 0) {
                int cnt4 = remain / 4;
                for (int j = 0; j < cnt4; j++) cout << 4;
                for (int j = 0; j < i; j++) cout << 7;
                found = true;
                break;
            }
        }

        if (!found) cout << -1;
        cout << endl;
    }

    return 0;
}

