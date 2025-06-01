#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s; // �?c x�u S
    stack<int> st; // Stack luu ch? s? c?a '(' ho?c v? tr� b?t d?u do?n h?p l?
    st.push(-1); // �?y -1 d? d�nh d?u di?m b?t d?u
    int maxLen = 0; // �? d�i d�y ngo?c d�ng d�i nh?t

    // Duy?t t?ng k� t? trong x�u
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            // G?p '(', d?y ch? s? v�o stack
            st.push(i);
        } else { // s[i] == ')'
            // Pop ch? s? d?u stack
            st.pop();
            
            if (st.empty()) {
                // Stack r?ng: ')' th?a, d�nh d?u v? tr� n�y l�m di?m b?t d?u m?i
                st.push(i);
            } else {
                // Stack kh�ng r?ng: T�nh d? d�i do?n h?p l?
                // �? d�i = ch? s? hi?n t?i - ch? s? d?u stack
                int currentLen = i - st.top();
                maxLen = max(maxLen, currentLen);
            }
        }
    }

    cout << maxLen << endl; // In d? d�i d�y ngo?c d�ng d�i nh?t
}

int main() {
    ios::sync_with_stdio(false); // Tang t?c d? nh?p/xu?t
    cin.tie(nullptr);
    int T;
    cin >> T; // �?c s? test case
    while (T--) {
        solve();
    }
    return 0;
}
