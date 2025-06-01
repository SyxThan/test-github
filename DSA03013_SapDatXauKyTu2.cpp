#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


/* Tinh tan suat cua tu xuat hien nhieu nhat Fmax
sau do lay do dai xau chia khoang cach X < lam tron len >
neu Fmax <= X --> True

*/
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		int f[26];
		memset(f,0,sizeof(f));
		for(int i = 0;i < s.length();i++){
			f[s[i] - 'A']++;
		}
		sort(f, f+26 ,greater<int> ()) ;
		if(f[0] <= ceil((float)s.length() / n) ) cout << 1;
		else cout << -1;
		cout << endl;
	}

}

