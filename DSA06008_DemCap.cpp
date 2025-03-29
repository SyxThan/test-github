#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n];
		int b[m];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		for(int i = 0;i < m;i++) {
			cin >> b[i];
		}
		int cnt = 0;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				if(pow(a[i],b[j]) > pow(b[j],a[i])) {
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}

