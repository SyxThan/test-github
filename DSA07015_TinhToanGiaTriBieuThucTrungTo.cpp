#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;
int pre(char c){
	if (c == '(') return 0;
	if(c == '+' || c == '-') return 1;
	if(c == '*' || c == '/') return 2;
}

long long solve(long long a, long long b, char c){
	if(c == '+') return a + b;
	else if(c == '-') return a - b;
	else if(c == '*') return a * b;
	else if(c == '/') return a / b;
	
}
int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<ll> st1;
		stack<char> st2;
		for(int i = 0;i < s.size();i++){
			if(s[i] == '('){
				st2.push(s[i]);
			}
			else if(isdigit(s[i])){
				long long tmp = 0;
				while(i < s.size() && isdigit(s[i])){
					tmp = tmp * 10 + (s[i] - '0');
					i++;
				}
				st1.push(tmp);
				i--;
			}

			else if(s[i] == ')'){
				while(!st2.empty() && st2.top() != '('){
					ll a = st1.top();st1.pop();
					ll b = st1.top();st1.pop();
					long long temp = solve(b,a,st2.top());
					st1.push(temp);
					st2.pop();
				}
				st2.pop();
			}
			else {
				while(!st2.empty() && pre(st2.top()) >= pre(s[i])){
					ll a = st1.top();st1.pop();
					ll b = st1.top();st1.pop();
					long long temp = solve(b,a,st2.top());
					st1.push(temp);
					st2.pop();
				}
				st2.push(s[i]);
			}
		}
		while(!st2.empty()){
			ll a = st1.top();st1.pop();
			ll b = st1.top();st1.pop();
			long long temp = solve(b,a,st2.top());
			st1.push(temp);
			st2.pop();
		}
		cout << st1.top() << endl;

	}

}


