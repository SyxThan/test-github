#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n - 1;i++){
		for(int j = i + 1;j < n;j++){
			if(a[i] > a[j]) swap(a[i],a[j]);
		}
		cout << "Buoc " << i + 1 << ":";
		for(int k = 0;k < n;k++){
			cout << " " << a[k];
		}
		cout << endl;
	}

}

