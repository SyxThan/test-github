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
		vector<int> a(n);
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		stack<int> st;
		for(int i = 0;i < n;i++){
			while(!st.empty() && a[st.top()] <= a[i]){
				st.pop();
			}
			if(st.empty()) cout << i + 1 << " ";
			else cout << i - st.top() << " ";
			st.push(i);
		}
		cout << endl;
	}

}


