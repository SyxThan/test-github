#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		long long res = 1;
		long long m2 = a[0] * a[1] * a[n-1];
		long long m3 = a[n-1] * a[n-2] * a[n-3];
		long long m4 = a[n-1] * a[n-2];
		long long m5 = a[0] * a[1];
	
		res = max(m5,max(m2,max(m3,m4)));
		cout << res << endl;

	

}

