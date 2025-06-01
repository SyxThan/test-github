#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n;
string s;
string cur;
vector<string> res;


void init(){
	cin >> n;
	cin >> s;
	sort(s.begin(),s.end());
}

void Try(int idx){
	for(int i = idx;i < n;i++){
		cur.push_back(s[i]);
		res.push_back(cur);
		
		Try(i+1);
		cur.pop_back();
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		cur.clear();
		res.clear();
		Try(0);
		sort(res.begin(),res.end());
		for(int i = 0;i < res.size();i++){
			for(int j = 0;j < res[i].size();j++){
				cout << res[i][j];
			}
			cout << " ";
		}
	}

}

