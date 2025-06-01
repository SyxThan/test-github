#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

char c;
string s;
bool unvs[1001];

void init(){
	for(int i = 1;i <= 1001;i++){
		unvs[i] = true;
	}
}
bool ktra(char c){
	return (c != 'A' && c != 'E');
}
void solve(){
	for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'A' || s[i] == 'E') {
            if (i > 0 && i < s.length() - 1 && ktra(s[i - 1]) && ktra(s[i + 1]))
                return;
        }
    }
    cout << s << endl;
	
}
void Try(char i){
	for(char j = 'A';j <= c;j++){
		if(unvs[j]){
			s.push_back(j);
			unvs[j] = false;
			if(s.length() == c - 'A' + 1) solve();
			else Try(i + 1);
			unvs[j] = true;
			s.pop_back();
		}
	}
}

int main(){
	init();
	cin >> c;
	Try('A');	
}
