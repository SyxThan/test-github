#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> b(n);
	
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		for(int i = 0;i < n;i++){
			cin >> b[i];
		}
	
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<int> ());
		long long res = 0;
		for(int i = 0;i < n;i++){
			res += a[i]*b[i];	
		}
		
		cout << res << endl;
	}

}

