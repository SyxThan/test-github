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
		queue<string> q;
		q.push("1");
		while(n--){
			string s = q.front();
			q.pop();
			cout << s << " ";
			q.push(s + "0");
			q.push(s + "1");
		}
		cout << endl;
	}

}


