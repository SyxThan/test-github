#include <bits/stdc++.h> 
#define ll long long 
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0); 
    int n, q; 
    cin >> n >> q; 
    vector<ll> h(n); 
    for (int i = 0; i < n; i++) { 
        cin >> h[i]; 
    }

    stack<int> st; 
    vector<int> neGreater(n, -1); 
    for (int i = 0; i < n; i++) { 
        while (!st.empty() && h[i] > h[st.top()]) { 
            neGreater[st.top()] = i; 
            st.pop(); 
        }
        st.push(i); 
    }
   
    while (q--) { 
        int x;
        cin >> x; 
        x--; 
        int steps = 0;
        int pos = x;
        while (pos != -1) { 
            pos = neGreater[pos];
            if (pos != -1) steps++; 
        }
        cout << steps << endl; 
    }

    return 0; 
}
