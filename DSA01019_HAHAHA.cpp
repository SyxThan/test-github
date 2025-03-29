#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

string s;
int n, final;

void ktao(){
	for(int i = 1;i <= n;i++){
		s[i] = 'A';
	}
}

void sinh(){
	int i = n;
	while(i > 0 && s[i] == 'H'){
		s[i] = 'A';
		i--;
	}
	if(i == 0) final = 1;
	else {
		s[i] = 'H';
	}
}

int check(string &s){
	if(s[1] != 'H' ) return 0;
    if(s[n] != 'A') return 0;
    for(int i = 1;i <= n;i++){
        if(s[i] == 'H' && s[i+1] == 'H') return 0;
    }
    return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
        ktao();
		final = 0;
		while(final == 0){
			if(check(s) == 1){
                for(int i = 1;i <= n;i++){
                    cout << s[i];
                }
                cout << endl;
            }
            sinh();
		}
	}
}
