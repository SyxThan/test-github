#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int x;
	cin >> x;
	for(int i = 0;i < n;i++){
		if(a[i] != x) cout << a[i] << " ";
	}
	cout << endl;
	

}




