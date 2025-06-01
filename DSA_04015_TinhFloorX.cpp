#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int floor(int a[],int n,int x){
	if(x < a[0]) return -1;
	for(int i = 0;i < n;i++){
		if(a[i] == x){
			return i + 1;	
		}
		else if(a[i] > x){
			return i;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		cout << floor(a,n,x) << endl;
	}

}

