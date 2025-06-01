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
		string s;
		cin >> s;
		priority_queue<int> pq;
		for(int i = 0;i < s.size() - 1;i++){
			int cnt = 1;
//			while(s[i] == s[i+1]){
//				cnt++;
//			}
			pq.push(cnt);
		}
		long long res = 0;
		if(n != 0){
			while(n--){
				int top = pq.front();
				pq.pop();
				pq.push
			}
		}
		while(!pq.empty()){
			res += (pq.front() * pq.front());
			pq.pop();
		}
		cout << res << endl;
		

	}

}


