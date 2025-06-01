#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;




int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int a[n],b[m];
		set<int> se;
		vector<int> v;
		for(int i = 0;i < n;i++){
			cin >> a[i];
			v.push_back(a[i]);
			
		}
		for(int i = 0;i < m;i++){
			cin >> b[i];
			v.push_back(b[i]);
		}
		sort(v.begin(),v.end());
		cout << v[k-1] << endl;
		

	}

}

