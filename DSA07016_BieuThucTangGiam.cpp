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
		stack<int> st;
		for(int i = 0;i <= s.length();i++){
			st.push(i+1);
			if(i == s.length() || s[i] == 'I'){
				while(!st.empty()){
					cout << st.top();
					st.pop();
				}
			}
		}
		cout << endl;
	}

}


