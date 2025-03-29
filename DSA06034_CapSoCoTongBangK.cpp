#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        int a;
        long long cnt = 0;
        while (n--)
        {
            cin >> a;
            cnt += mp[k - a];
            mp[a]++;
        }
        cout << cnt << "\n";
    }
}