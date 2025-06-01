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
		string s;
		getline(cin,s);
		
		stringstream ss(s);
		string w;
		stack<ll> st;
		while(ss >> w){
			if(w == "+" || w == "-" || w == "*" || w == "/"){
				ll a = st.top(); st.pop();
				ll b = st.top(); st.pop();
				ll tmp = 0;
				if(w == "+"){
					tmp = a + b;
				}
				else if (w == "-"){
					tmp = b - a;
				}
				else if (w == "*"){
					tmp = a * b;
				}
				else if (w == "/"){
					tmp = b / a;
				}
				st.push(tmp);
			}else{
				st.push(stoll(w));
			}
		}
		cout << st.top() << endl;

	}

}


