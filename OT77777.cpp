#include <bits/stdc++.h> 
#define ll long long 
#define limit 1000000 
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0); 
    int t; 
    cin >> t; 
    while (t--) { 
        int n; 
        cin >> n; 
        vector<string> v; 
        for (int i = 0; i < n; i++) { 
            string s;
            cin >> s; 
            v.push_back(s);
        }
        stack<ll> st; 
    
        if (v[0] == "+" || v[0] == "-" || v[0] == "*" || v[0] == "/") {
            for (int i = n - 1; i >= 0; i--) {
                if (v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/") {
                    ll a = st.top(); st.pop(); 
                    ll b = st.top(); st.pop();
                    if (v[i] == "+") st.push(b + a);
                    else if (v[i] == "-") st.push(a - b);
                    else if (v[i] == "*") st.push(b * a);
                    else if (v[i] == "/") st.push(a / b); 
                } else {
                    
                    st.push(stoll(v[i])); 
                }
            }
            cout << st.top() << endl; 
        } else {
            for (int i = 0; i < n; i++) {
                if (v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/") {
                   
                    ll a = st.top(); st.pop(); 
                    ll b = st.top(); st.pop(); 
                    
                    if (v[i] == "+") st.push(b + a);
                    else if (v[i] == "-") st.push(b - a);
                    else if (v[i] == "*") st.push(b * a);
                    else if (v[i] == "/") st.push(b / a); 
                } else {
                    st.push(stoll(v[i])); 
                }
            }
            cout << st.top() << endl; 
        }
    }
    return 0; 
}
