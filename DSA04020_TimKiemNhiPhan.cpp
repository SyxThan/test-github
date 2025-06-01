#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int search(int a[],int n,int x){
    int l = 0,r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == x) return mid + 1;
        if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
        if(search(a,n,k) == -1) cout << "NO" << endl;
        else cout << search(a,n,k) << endl;
		
		
	}
}

