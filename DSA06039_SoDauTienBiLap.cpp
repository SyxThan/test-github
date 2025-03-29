#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100000];
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0;i < n;i++){
            mp[a[i]]++;
        }
        int ok = 0;
        for(int i = 0;i < n;i++){
            if(mp[a[i]] > 1) {
                cout << a[i] << endl;
                ok = 1;
                break;
            }
        }
        if(ok == 0) cout << "NO" << endl;

        
    }
}