#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 5];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		int tmp = a[i];
		int j = i - 1;
		cout << "Buoc " << i - 1 << ":";
		for(int k = 0;k <= j;k++){
			cout << " " << a[k];
		}
		cout << endl;
		while(j >= 0 && a[j] > tmp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
	}
	
}

