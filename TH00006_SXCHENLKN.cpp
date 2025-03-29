#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int n;
	cin >> n;
    vector<vector<int>> res;
	vector<int> a(n + 5);
    vector<int> b;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		int tmp = a[i];
		int j = i - 1;
		
		for(int k = 0;k <= j;k++){
			b.push_back(a[k]);
		}
        res.push_back(b);
		cout << endl;
		while(j >= 0 && a[j] > tmp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
        b.clear();
	}
	


    for(int i = res.size() - 1;i >= 0;i--){
        cout << "Buoc " << i  << ":";
		for(int j = 0;j < res[i].size();j++){
			cout << " "<< res[i][j];
		}
		cout << endl;
    }
}

