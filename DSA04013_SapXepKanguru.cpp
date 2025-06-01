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
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		sort(a.begin(),a.end(),greater<int> ());
		long long ans = 0;
		int i = 0;
		int j = 0;
		while(i < n/2 && j < n){
			if(a[i] >= a[j]*2){
				ans	++;
				i++;
				j++;
			}
			else j++;
		}
		cout << n - ans << endl;

	}

}

