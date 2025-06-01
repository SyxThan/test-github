#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int s,d;
		cin >> s >> d;
		if(s > 9 * d){
			cout << -1 << endl;
			continue;
		}
		int a[d] = {0};
		a[0] = 1;
		s -= 1;
		for(int i = d - 1;i >= 0;i--){
			int x = min(s,9 - a[i]);
			a[i] += x;
			s -= x;
		}
	
		for(int i = 0;i < d;i++){
			cout << a[i];
		}
		cout << endl;

	}

}

