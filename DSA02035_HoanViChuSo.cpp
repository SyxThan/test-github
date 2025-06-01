#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<string> a(n);
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		vector<int> cur;
		for(int i = 0;i < n;i++){
            int x = next_permutation(a[i].begin(), a[i].end());
            cur.push_back(x);
        }

	}
}