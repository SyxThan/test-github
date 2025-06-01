#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		
		stack<string> st;
		for(int i = s.size() - 1;i >= 0;i--){
			if(isalpha(s[i])) {
				st.push(string(1,s[i]));
			}
			else{
				char c = s[i];
				string oper1 = st.top();st.pop();
				string oper2 = st.top();st.pop();
				string tmp = oper1 + oper2 + c;
				st.push(tmp);
				
			}
		}
		cout << st.top() << endl;
	}

}


