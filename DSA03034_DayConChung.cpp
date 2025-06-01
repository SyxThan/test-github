#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		vector<int> a(n);
		vector<int> b(m);
		vector<int> c(k);
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		for(int i = 0;i < m;i++){
			cin >> b[i];
		}
		for(int i = 0;i < k;i++){
			cin >> c[i];
		}
		vector<int> d;
		int x = 0;
		int y = 0;
		int z = 0;
		while(x < n && y < m && z < k){
			if(a[x] == b[y] && b[y] == c[z]){
				d.push_back(a[x]);
				x++;
				y++;
				z++;
			}else{
				int m = min(a[x],min(b[y],c[z]));
				if(a[x] == m) x++;
				if(b[y] == m) y++;
				if(c[z] == m) z++;
			}
		}
		if(d.size() == 0){
			cout << "NO";
		}else{
			for(int i = 0;i < d.size();i++){
				cout << d[i] << " ";
			}
		}
		cout << endl;
	}

}

