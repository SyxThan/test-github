#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int n;
	cin >> n;
	int a[n];
	map<int,int> mp;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		if(mp[a[i]] == 0){
			cout << a[i] << " ";
			mp[a[i]] = 1;
		}
	}
	cout << endl;
	
	

}




