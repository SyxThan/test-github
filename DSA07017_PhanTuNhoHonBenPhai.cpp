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
		stack<ll> st;
		vector<ll> nGreater(n,-1);
		vector<ll> idxGreater(n,-1);
		for(int i = 0;i < n;i++){
			if(st.empty()){
				st.push(i);
			}
			else{
				while(!st.empty() && a[i] > a[st.top()]){
					nGreater[st.top()] = a[i];
					idxGreater[st.top()] = i;
					st.pop(); 
				}
				st.push(i);
			}
		}
		while(!st.empty()){
			nGreater[st.top()] = -1;
			idxGreater[st.top()] = -1;
			st.pop();
		}
		
		vector<ll> preSmall(n,-1);
		stack<ll> st1;
		for(int i = 0;i < n;i++){
			if(st1.empty()){
				st1.push(i);
			}
			else {
				while(!st1.empty() && a[i] < a[st1.top()]){
					preSmall[st1.top()] = a[i];
					st1.pop();
				}
				st1.push(i);
			}
		}
		while(!st1.empty()){
			preSmall[st1.top()] = -1;
			st1.pop();
		}
		vector<ll> ans(n);
		for(int i = 0;i < n;i++){
			if(idxGreater[i] == -1){
				ans[i] = -1;
			}
			else{
				ans[i] = preSmall[idxGreater[i]];
			}
		}
		for(int i = 0;i < n;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
		
	}

}


