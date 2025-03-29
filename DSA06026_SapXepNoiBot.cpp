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
	for(int i = 0; i < n;i++){
		int ok = 1;
		for(int j = 0;j < n - i - 1;j++){
			if(a[j] > a[j+1]) 
			{
				swap(a[j],a[j+1]);
				ok = 0;
			}
		}
		if(ok == 1) break;
		cout << "Buoc " << i + 1 << ":";
		for(int k = 0;k < n;k++){
			cout << " "<< a[k];
		}
		cout << endl;
	}
}

