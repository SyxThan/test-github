#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

void SelectionSort(int a[],int n){
	for(int i = 0; i < n - 1;i++){
		cout << "Buoc " << i+1 << ":";
		int min_idx = i;
		for(int j = i + 1;j < n;j++){
			if(a[j] < a[min_idx] ) min_idx = j;
		}
        swap(a[i],a[min_idx]);
		for(int j = 0;j < n;j++){
			cout << " " << a[j];
		}
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	SelectionSort(a,n);
}
