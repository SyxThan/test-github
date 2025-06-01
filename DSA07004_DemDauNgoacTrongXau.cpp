#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s; // Ð?c xâu S
    stack<int> st; // Stack luu ch? s? c?a '(' ho?c v? trí b?t d?u do?n h?p l?
    st.push(-1); // Ð?y -1 d? dánh d?u di?m b?t d?u
    int maxLen = 0; // Ð? dài dãy ngo?c dúng dài nh?t

    // Duy?t t?ng ký t? trong xâu
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            // G?p '(', d?y ch? s? vào stack
            st.push(i);
        } else { // s[i] == ')'
            // Pop ch? s? d?u stack
            st.pop();
            
            if (st.empty()) {
                // Stack r?ng: ')' th?a, dánh d?u v? trí này làm di?m b?t d?u m?i
                st.push(i);
            } else {
                // Stack không r?ng: Tính d? dài do?n h?p l?
                // Ð? dài = ch? s? hi?n t?i - ch? s? d?u stack
                int currentLen = i - st.top();
                maxLen = max(maxLen, currentLen);
            }
        }
    }

    cout << maxLen << endl; // In d? dài dãy ngo?c dúng dài nh?t
}

int main() {
    ios::sync_with_stdio(false); // Tang t?c d? nh?p/xu?t
    cin.tie(nullptr);
    int T;
    cin >> T; // Ð?c s? test case
    while (T--) {
        solve();
    }
    return 0;
}
