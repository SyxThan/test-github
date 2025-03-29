#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

string s;
int n, final;

void ktao(){
	for(int i = 1;i <= n;i++){
		s[i] = '6';
	}
}

void sinh(){
	int i = n;
	while(i > 0 && s[i] == '8'){
		s[i] = '6';
		i--;
	}
	if(i == 0) final = 1;
	else {
		s[i] = '8';
	}
}

int check(string &s){
	if(s[1] != '8') return 0;
	if(s[n] != '6') return 0;
	for(int i = 1;i < n;i++){
		if(s[i] == '8' && s[i+1] == '8') return 0;
	}
    for(int i = 1;i < n-3;i++){
        if(s[i] == '6' && s[i+1] == '6' && s[i+2] == '6' && s[i+3] == '6') return 0;
    }
    return 1;
	
}
int main(){
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
