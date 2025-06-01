#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int kadane(int a[],int n){
	int curSum = 0;
	int maxSum = 0;
	for(int i = 0;i < n;i++){
		// tim max cua a[i] va curSum + a[i] 
		curSum = max(a[i],curSum + a[i]);
		maxSum = max(curSum, maxSum);
	}
	return maxSum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		cout << kadane(a, n) << endl;
	}

}

