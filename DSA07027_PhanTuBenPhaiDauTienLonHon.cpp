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
		vector<ll> a(n);
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		stack<ll> st;
		vector<ll> b(n);
		for(int i = 0;i < n;i++){
			if(st.empty()){
				st.push(i);
			}
			else{
				while(!st.empty() && (a[i] > a[st.top()])){
					b[st.top()] = a[i];
					st.pop();
				}
				st.push(i);
			}
		}
		while(!st.empty()){
			b[st.top()] = -1;
			st.pop();
		}
		for(int i = 0;i < n;i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}

}


