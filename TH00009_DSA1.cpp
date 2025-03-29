#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int n;
	cin >> n;
	int s, k;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> s >> k;
	int tmin;
	for(int i = 0;i <= s;i++){
		long long sum = 0;
		for(int j = i;j <= s;j++){
			sum += a[j];
		}
		if(sum <= k) {
			tmin = i;
			break;
		}
	}
	cout << tmin;
	

}

