#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int a[1000], n, final;

void ktao(){
	for(int i = 1;i <= n ;i++){ // Tao hoan vi dau tien
		a[i] = n - i + 1; // Tao hoan vi giam dan
	}
}

void sinh(){
	int i = n - 1;
	while(i > 0 && a[i] < a[i+1]){ // Tim vi tri i dau tien ma a[i] < a[i+1]
		i--;
	}
	if(i == 0) final = 1;
	else {
		int j = n;
		while(a[j] > a[i]) j--; // Tim vi tri j dau tien ma a[j] < a[i]
		swap(a[i],a[j]);
		int l = i+1, r = n;
		while(l <= r){
			swap(a[l],a[r]);
			l++;
			r--;
		}
 	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ktao();
		final = 0;
		while(final == 0){
			for(int i = 1;i <= n;i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
	
		}
		cout << endl;
	}
}

