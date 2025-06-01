#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int cntDay(int n,int s,int m){
	int cnt = 0;
	if(m > n || 6*(n-m) < m){
		return -1;
	}
	else{
		cnt = ceil(float(m*s)/n);
		return cnt;
	}
	
	
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n,s,m;
		cin >> n >> s >> m;
		cout << cntDay(n,s,m) << endl;
		

	}

}

