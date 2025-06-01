#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 0;i < n;i++) cin >> a[i];
		int ok = 1;
		for(int i = 0;i < n - 1;i++){
			if(a[i] >= a[i+1]) {
				ok = 0;
				break;
			}
		}
		cout << ok << endl;
	}

}


