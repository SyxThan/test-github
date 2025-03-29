#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

string s;
int final;

void sinh(){
	int i = s.length() - 1;
	while(i > 0 && s[i] == '0'){
		s[i] = '1';
		i--;
	}
	if(i == 0) final = 1;
	else {
		s[i] = '0';
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		final = 0;
		sinh();
		if(final == 0) cout << s << endl;
		else {
			for(int i = 1;i <= s.length();i++){
				cout << '1';
			}
		}
	}

}

