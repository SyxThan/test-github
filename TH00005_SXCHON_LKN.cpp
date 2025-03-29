#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

vector<vector<int>> res;

void SelectionSort(vector<int> a,int n){
	for(int i = 0; i < n - 1;i++){
		int min_idx = i;
		for(int j = i + 1;j < n;j++){
			if(a[j] < a[min_idx] ) min_idx = j;
		}
        swap(a[i],a[min_idx]);
		res.push_back(a);
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	SelectionSort(a,n);
    for(int i = res.size() - 1;i >= 0;i--){
        cout << "Buoc " << i + 1 << ":";
            for(int j = 0; j < n;j++){
                cout << " " << res[i][j];
            }
            cout << endl;
    }
}
