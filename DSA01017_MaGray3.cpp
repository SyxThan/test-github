#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res = "";
		res += s[0];
		for(int i = 1;i < s.length();i++){
			if(s[i-1] != s[i]) res += '1';
			else res += '0';
		}
		cout << res << endl;
	}

}

