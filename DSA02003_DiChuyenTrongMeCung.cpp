#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,a[11][11];
string s = "";
vector<string> res;
void init(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
}
void Try(int i,int j){
	if(i == n && j == n){
		res.push_back(s);
	}
	if(i < n && a[i+1][j] == 1){
		s += 'D';
		Try(i+1,j);
		s.pop_back();
	}
	if(j < n && a[i][j+1] == 1){
		s += 'R';
		Try(i,j + 1);
		s.pop_back();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		s = "";
		res.clear();
		Try(1,1);
		if (a[1][1] == 0 || a[n][n] == 0 || res.size() == 0) {
	        cout << "-1";
    	} else{
    		sort(res.begin(),res.end());
    		for(auto x : res){
    			cout << x << " ";
			}
		}
		cout  << endl;
	}

}

