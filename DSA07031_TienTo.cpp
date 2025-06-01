#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cin.ignore();
		vector<string> v;
		for(int i = 0;i < n;i++){
			string s;
			cin >> s;
			v.push_back(s);
		}
		stack<ll> st;
		for(int i = v.size() - 1;i >= 0;i--){
			if(v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/"){
				ll a = st.top(); st.pop();
				ll b = st.top(); st.pop();
				ll tmp = 0;
				if(v[i] == "+"){
					tmp = a + b;
				}
				else if (v[i] == "-"){
					tmp = a - b ;
				}
				else if (v[i] == "*"){
					tmp = a * b;
				}
				else if (v[i] == "/"){
					tmp = a / b;
				}
				st.push(tmp);
			} else{
				st.push(stoll(v[i]));
			}
		}
		
		cout << st.top() << endl;

	}

}


