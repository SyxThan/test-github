#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int fb[93];
void fibo(){
	fb[1] = 1;
	fb[2] = 1;
	for(int i = 3;i < 93;i++){
		fb[i] = fb[i - 1] + fb [i - 2];
	}
}

int result(long long n,long long k){
	if(n == 1) return 0;
	if(n == 2) return 1;
	if(k <= fb[n - 2]) return result(n-2,k);
	else return result(n-1,k - fb[n-2]); 
	
}

int main(){
	int t;
	cin >> t;
	fibo();
	while(t--){
		long long n, k;
		cin >> n >> k;
		cout << result(n,k) << endl;
	}

}

