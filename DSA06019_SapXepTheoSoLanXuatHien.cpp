#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int cmp(const pair<int,int> a,const pair<int, int> b){
	if(a.second != b.second) return a.second > b.second;
	else {
		return a.first < b.first;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		map<int,int> mp;
		for(int i = 0;i < n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		vector<pair<int,int>> v;
		for(auto i : mp){
			v.push_back({i.first,i.second});
		}
		sort(v.begin(),v.end(),cmp);
		for(auto i : v){
			for(int j = 0;j < i.second;j++){
				cout << i.first << " ";
			}
		}
		cout << endl;
		
	}
}

