#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n;
long long res;
int a[2] = {0,9};

void init(){
	cin >> n;
}
void Try(int idx,long long k){
	if(k % n == 0){
		res = k;
		return;
	}
	for(int i = idx;i < 18;i++){
		k = k * 10 + a[i];
		Try(i,k);
		k /= 10;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		Try(0,1);
	}

}

