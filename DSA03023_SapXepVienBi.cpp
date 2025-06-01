#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

// Dem vung X T D
// Xac dinh vung ma moi mau nen nam X:0 -- > X - 1, T: X --> T-1, D: con lai
void solve(){
	int cT = 0;
	int cX = 0;
	int cD = 0;
	for(int i = 0;i < n;i++){
		if(s[i] == 'T') cT++;
		else if(s[i] == 'X') cX++;
		else cD++;
	}
	for(int i = 0;i < cX;i++){
		
	}
	
	
}

int main(){
	int n;
	cin >> n;
	vector<char> s(n);
	for(int i = 0;i < n;i++){
		cin >> s[i];
	}
	for(int i = 0;i < n;i++){
		if(s[i] != s[i-1]) {
			cout << s[i];
		}
	}

}

