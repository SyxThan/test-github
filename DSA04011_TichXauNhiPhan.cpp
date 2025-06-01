#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

long long chuyenCoSo(string s){
	long long res = 0;
	int k = 0;
	for(int i = s.size() - 1;i >= 0;i--){
		res += (s[i] - '0')*pow(2,k++);
	}
	return res;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		long long res = chuyenCoSo(s1) * chuyenCoSo(s2);
		cout << res << endl;

	}

}

