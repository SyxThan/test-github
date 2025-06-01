#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		bool ok = true;
		stack<int> st;
		for(int i = 0;i < s.size();i++){
			if(s[i] == '[' || s[i] == '{' || s[i] == '('){
				if(s[i] == '['){
					st.push(3);
				}
				else if (s[i] == '{'){
					st.push(2);
				}
				else if(s[i] == '('){
					st.push(1);
				}
			}
			else {
				if(!st.empty() && s[i] == ']'){
					if (st.top() != 3) {
						ok = false;
						break;
					}
					else st.pop();
				}
				if(!st.empty() && s[i] == '}'){
					if (st.top() != 2) {
						ok = false;
						break;
					}
					else st.pop();
				}
				if(!st.empty() && s[i] == ')'){
					if (st.top() != 1) {
						ok = false;
						break;
					}
					else st.pop();
				}
			}
			
		}
		if(!ok || !st.empty()){
			cout << "NO";
		}
		else cout << "YES";
		cout << endl;
	}

}


