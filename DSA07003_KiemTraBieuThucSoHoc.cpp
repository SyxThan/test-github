#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool check(string s){
	stack<char> st;
	for(int i = 0;i < s.length();i++){
		if(s[i] == ')'){
			bool dau = false;
			while(!st.empty() && st.top() != '('){
				char top = st.top();
				st.pop();
				if(top == '+' || top == '-' || top == '*' || top == '/'){
					dau = true;
				}
			}
			
			if(!st.empty()) st.pop();
			
			if(!dau) return true;
				
		}
		else {
			st.push(s[i]);
		}
	}
	return false;
}


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		
		if(check(s)){
			cout << "Yes";
		}
		else cout << "No";
		cout << endl;
	}

}


