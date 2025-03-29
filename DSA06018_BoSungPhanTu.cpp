#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		set<int> se;
		for(int i = 0;i < n;i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		sort(a,a+n);
		int l = a[0];
		int r = a[n-1];
		int cnt = r - l + 1 - se.size();
		cout << cnt << endl;
		
	}
	
}

