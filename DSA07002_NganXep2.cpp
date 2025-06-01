#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

void inStack(stack<int> st){
	if (!st.empty()) {
        cout << st.top();
    }
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	stack<int> st;
	while(t--){
		string s;
		int x;
		cin >> s;
		if(s == "PUSH"){
			cin >> x;
			st.push(x);
		}
		else if(s == "POP"){
			if(!st.empty()){
				st.pop();
			}
		}
		else if(s == "PRINT"){
			if(st.empty()){
				cout << "NONE";
			}
			else {
				inStack(st);
			}
			cout << endl;
		}

	}

}


