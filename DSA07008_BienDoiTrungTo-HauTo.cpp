#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int pre(char c){
	if (c == '(') return 0;
	if(c == '+' || c == '-') return 1;
	if(c == '*' || c == '/') return 2;
	if(c == '^') return 3;
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		string res = "";
		for(char c : s){
			if(isalpha(c)){
				res += c;
			}
			else if(c == '('){
				st.push(c);
			}
			else if(c == ')'){
				// In ra toan tu
				while(!st.empty() && st.top() != '('){
					res += st.top();
					st.pop();
				}
				// Xoa dau (
				st.pop();
			}
			// + / * / ^
			else {
				while(!st.empty() && pre(st.top()) >= pre(c)){
					res += st.top();
					st.pop();
				}
				st.push(c);	
			}
		}
		while(!st.empty()){
			res += st.top();
			st.pop();
		}
		cout << res << endl;
	}

}


