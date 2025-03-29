#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

string s;
int n, final;

void ktao(){
	for(int i = 0;i <= n;i++){
		s[i] = 'A';
	}
}
void sinh(){
	int i = n;
	while(i > 0 && s[i] == 'B'){
		s[i] = 'A';
		i--;
	}
	if(i == 0) final = 1;
	else {
		s[i] = 'B';
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		final = 0;
		ktao();
		while(final == 0){
			for(int i = 1;i <= n;i++){
				cout << s[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}

