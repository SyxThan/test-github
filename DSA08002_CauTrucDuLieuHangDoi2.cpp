#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	queue<int> q;
	while(t--){
		string s;
		cin >> s;
		if(s == "PUSH"){
			int x;
			cin >> x;
			q.push(x);
		}
		else if (s == "PRINTFRONT"){
			if(!q.empty()){
				cout << q.front() << endl;
			}
			else cout << "NONE" << endl;
		}
		else if (s == "POP"){
			if(!q.empty()){
				q.pop();
			}
			
		}	
		
	
	}

}


