#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n + m - 1] = {0};
		int a1[n],a2[m];
		for(int i = 0;i < n;i++) cin >> a1[i];
		for(int i = 0;i < m;i++) cin >> a2[i];
		
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				a[i+j] += a1[i] * a2[j];
			}
		}
		for(int i = 0;i < n + m - 1;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}

}

