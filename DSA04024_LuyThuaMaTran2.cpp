#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
#define MOD 1000000007
using namespace std;

int n, k;
// mang de d de luu phan tu ban dau cua mang a
long long a[11][11], d[11][11];

void MUL(long long a[11][11], long long b[11][11]){
	long long c[11][11] = {};
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			for(int k = 1;k <= n;k++){
				c[i][j] += a[i][k] * b[k][j];
				c[i][j] %= MOD;
			}
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			a[i][j] = c[i][j];
		}
	}
}

void POW(long long a[11][11],int k){
	if(k == 1) return;
	POW(a,k/2);
	MUL(a,a);
	if(k % 2 == 1) return MUL(a,d);
}


void INIT(){
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
			d[i][j] = a[i][j];
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		INIT();
		POW(a,k);
		long long res = 0;
		for(int i = 1;i <= n;i++){
			res += a[i][n];
			res %= MOD;
		}
		cout << res << endl;
	}

}

