#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

long long ma[11][11] = {{1,1},{1,0}};
long long a[11][11];

void MUL(long long a[11][11], long long b[11][11]){
	long long c[11][11] = {};
	for(int i = 0;i <= 1;i++){
		for(int j = 0;j <= 1;j++){
			for(int k = 0;k <= 1;k++){
				c[i][j] += a[i][k] * b[k][j];
				c[i][j] %= MOD;
			}
		}
	}
	for(int i = 0;i <= 1;i++){
		for(int j = 0;j <= 1;j++){
			a[i][j] = c[i][j];
		}
	}
}

void POW(long long a[11][11],long long k){
	if(k == 1) return;
	POW(a,k/2);
	MUL(a,a);
	if(k % 2 == 1) MUL(a,ma);
}



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[11][11] = {{1,1},{1,0}};
		POW(a,n-1);
		cout << a[0][0] % MOD<< endl;
	}

}

