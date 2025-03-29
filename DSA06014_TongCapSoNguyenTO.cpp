#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int nto(int n){
	for(int i = 2;i*i <= n;i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		bool check = false;
		for(int i = 0;i <= n;i++){
			if(nto(i) && nto(n-i)) {
				check = true;
				cout << i << " " << n - i;
				break;
			}
		}
		if(check == false) cout << -1;
		cout << endl;
	}
	

}

