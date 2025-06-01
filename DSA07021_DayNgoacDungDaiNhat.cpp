#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

// Khoi tao diem bat dau la -1
// ( : push(i)
// ) : st.pop(), ktra stempty() -> push (i)
//// tinh curLen = i - st.top() -> maxLen


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		st.push(-1); // diem bat dau 
		int maxLen = 0;
		for(int i = 0;i < s.length();i++){
			if(s[i] == '('){
				st.push(i);
			}
			else {
				st.pop();
				// Neu stack rong thi cho i vao lam diem bat dau
				if(st.empty()){
					st.push(i);
				}
				else{
					int curLen = i - st.top();
					maxLen = max(maxLen,curLen);
				}
			}
		}
		cout << maxLen << endl;

	}

}


