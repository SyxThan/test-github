#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int maxCrossingSum(int a[],int l,int m, int r){
	int sum = 0;
	int leftSum = INT_MIN;
	// Tinh max ben trai m --> l
	for(int i = m;i >= l;i--){
		sum += a[i];
		leftSum = max(sum,leftSum);
	}
	// Tinh max ben phai m + 1 --> r
	sum = 0;
	int rightSum = INT_MIN;
	for(int i = m + 1;i <= r;i++){
		sum += a[i];
		rightSum = max(sum,rightSum);
	}
	return leftSum + rightSum;
}

int maxArraySum(int a[],int l,int r){
	if(l == r) return a[r];
	int m = (l + r)/2;
	
	
	int leftMax = maxArraySum(a, l, m);
	int rightMax = maxArraySum(a, m + 1, r);
	int crossMax = maxCrossingSum(a, l, m, r);
	
	int res = max(max(leftMax,rightMax),crossMax);
	return res;
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
		cout << maxArraySum(a, 0,n - 1) << endl;
	}

}

