#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n;
vector<int> a;
vector<vector<int>> res;
vector<int> cur;

int nto(int n){
	for(int i = 2;i*i <= n;i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

bool cmp(vector<int> a, vector<int> b){
    return a < b;
}

void init(){
	cin >> n;
	a.resize(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end(), greater<int>()); 
}
void Try(int idx, int sum){
	if(nto(sum)){
		res.push_back(cur);
	}
	for(int i = idx;i < n;i++){
		cur.push_back(a[i]);
		Try(i+1 ,sum + a[i]);
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
		Try(0,0);
		
		sort(res.begin(),res.end(),cmp);
		for(int i = 0;i < res.size();i++){
			for(int j = 0;j < res[i].size();j++){
				cout << res[i][j] << " ";
			}

			cout << endl;
		}
		
	}

}

