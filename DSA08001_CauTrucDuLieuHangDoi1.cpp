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
		queue<int> q;
		for(int i = 0;i < n;i++){
			int x;
			cin >> x;
			if(x == 1){
				cout << q.size() << endl;
			}
			else if (x == 2){
				if(q.empty()) {
					cout << "YES";
				}else cout << "NO";
				cout << endl;
			}
			else if (x == 3){
				int a; cin >> a;
				q.push(a);
			}
			else if (x == 4){
				if(!q.empty()){
					q.pop();
				}
			}
			else if (x == 5){
				if(!q.empty()){
					cout << q.front() << endl;
				}else {
					cout << -1 << endl;
				}
			}
			else if (x == 6){
				if(!q.empty()){
					cout << q.back() << endl;
				}else {
					cout << -1 << endl;
				}
			}
		}

	}

}


