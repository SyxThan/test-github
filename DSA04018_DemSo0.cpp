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
		int sum = 0;
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		int pos = lower_bound(a.begin(),a.end(),1) - a.begin();
		cout << pos << endl;
		
	}

}

