#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n, k;
string s;
vector<string> res;
vector<string> v;
void backtrack(int i){
	for(int j = i ;j < v.size();j++){
		res.push_back(v[j]);
		if(res.size() == k) {
			for(int k = 0;k < res.size();k++){
				cout << res[k] << " ";
			}
			cout << endl;
		} else backtrack(j + 1);  // backtrack j + 1 de khong trung phan tu
		res.pop_back();
	}
}

int main(){
	cin >> n >> k;
	cin.ignore();
	string s;
	getline(cin,s);
	stringstream ss(s);
	set<string> se;
	string w;
	while(ss >> w){
		se.insert(w);
	}
	for(string it : se){
		v.push_back(it);
	}
	backtrack(0);
}

