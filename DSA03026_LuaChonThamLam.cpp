#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

void minn(int n,int s){
	int mi[n] = {0};
	// so phan tu dau = 1 de khong bi het
	mi[0] = 1;
	// tong tru di 1
	s -= 1;
	for(int i = n - 1;i >= 0;i--){
		// tim min s va 9 - s[i]
		int x = min(s,9-mi[i]);
		mi[i] += x;
		s -= x;
	}
	for(int i = 0;i < n;i++){
		cout << mi[i];
	}
}
void maxx(int n,int s){
	for(int i = 0;i < n;i++){
		int digit = min(9,s);
		cout << digit;
		s -= digit;
	}
}


int main(){
	int n,s;		
	cin >> n >> s;
	if(9*n < s || (s <= 0 && n > 0)) {
		cout << -1 << " " << -1;
		return  0;
	}
	minn(n,s);
	cout << " ";
	maxx(n,s);
	
	
}

