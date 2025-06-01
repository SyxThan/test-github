#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<string> st;
		for(int i = s.size() - 1;i >= 0;i--){
			if(isalpha(s[i])){
				st.push(string(1,s[i]));
			}
			else{
				char c = s[i];
				string tmp = "";
				string oper1 = st.top(); st.pop();
				string oper2 = st.top(); st.pop();
				tmp = "(" + oper1 + c + oper2 + ")";
				st.push(tmp);	
			}
		}
		cout << st.top() << endl;
			
	}

}


