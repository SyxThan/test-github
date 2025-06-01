#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

void Dynamic(vector<int> a){
	int n = a.size();
	// Khai bao bang phuong an luu day con dai nhat tai vi tri i
	vector<int> dp(n,1);
	// Khoi tao gia tri ban dau 
	// Truy vet bang phuong an
	for(int i = 0;i < n;i++){
		for(int j = 0;j < i;j++){
			if(a[i] > a[j]){
				dp[i] = max(dp[i],dp[j]+1);
			} 
		}
	}
	cout << *max_element(dp.begin(),dp.end()) << endl;
}

int main(){
	int t;
	t = 1;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		// Khai bao bang phuong an
		
		// Khoi tao gia tri ban dau 
		Dynamic(a);
		// Truy vet bang phuong an
	}

}


