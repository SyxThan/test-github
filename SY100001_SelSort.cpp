#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

void selsort(int a[],int n){
	for(int i = 0;i < n - 1;i++){
		int min_idx = i;
		for(int j = i + 1;j < n;j++){
			if(a[j] < a[min_idx]) min_idx = j;
		}
		swap(a[min_idx],a[i]);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	selsort(a,n);
	for(int i = 0;i < n;i++){
		cout << a[i];
	}
}

