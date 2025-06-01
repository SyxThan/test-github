#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string w;
		vector<string> v;
		while(ss >> w){
			v.push_back(w);
		}
		for(int i = v.size() - 1;i >= 0;i--){
			cout << v[i] <<  " ";
		}
		cout << endl;
	}

}


