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
		
		stack<int> st;
		for(int i = 0;i < s.size();i++){
			if(isdigit(s[i])) {
				st.push(s[i] - '0');
			}
			else{
				int oper1 = st.top();st.pop();
				int oper2 = st.top();st.pop();
				int tmp = 0;
				if(s[i] == '+'){
					tmp = oper1 + oper2;
				}
				else if(s[i] == '-'){
					tmp = oper2 - oper1;
				}
				else if(s[i] == '*'){
					tmp = oper1 * oper2;
				}
				else if (s[i] == '/'){
					tmp = oper2 / oper1;
				}
				st.push(tmp);
				
			}
		}
		cout << st.top() << endl;
	}

}


