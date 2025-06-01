#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,k;
int a[10][10];
int col[10];
bool unvs[10];
vector<vector<int>> res;

void init(){
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < 10;i++){
		unvs[i] = true;
	}
}
void Try(int row,int sum){
	if(row == n){
		if(sum == k){
			vector<int> tmp;
			for(int i = 0;i < n;i++){
				tmp.push_back(col[i] + 1);
			}
			res.push_back(tmp);
		}
	
	}
	// cho cot chay
	for(int j = 0;j < n;j++){
		if(unvs[j]){
			unvs[j] = false;
			col[row] = j;
			Try(row + 1,sum + a[row][j]);
			unvs[j] = true;
		}
		
	}
}


int main(){
	init();
	res.clear();
	Try(0,0);
	cout << res.size() << endl;
	for(int i = 0;i < res.size();i++){
		for(int j = 0;j < res[i].size();j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

