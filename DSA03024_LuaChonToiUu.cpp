#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

bool cmp(const pair<int,int> &a,const pair<int,int> &b){
	if (a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<pair<int,int>> v(n);
		for(int i = 0;i < n;i++){
			cin >> v[i].first >> v[i].second;
		}
		sort(v.begin(),v.end(),cmp);
		int cnt=1;
		int lastchoose = v[0].second;
		for(int i = 1;i < n;i++){
			if(v[i].first > lastchoose){
				cnt++;
				lastchoose = v[i].second;
			}
		}
		cout << cnt << endl;
	}

}

