#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


long long chuyenCoSo10(int k, long long a){
	long long res = 0;
	int i = 0;
	while(a != 0){
		int digit = a % 10;
		res += digit*pow(k,i);
		i++;
		a/=10;
	}
	return res;
}

string chuyenCoSoK(int k, long long a){
	if (a == 0) return "0";
	string res = "";
	while (a != 0){
		res = char('0' + a % k) + res;
		a /= k;
	}
	return res;
}



int main(){
	int t;
	cin >> t;
	while(t--){
		ll k,a,b;
		cin >> k >> a >> b;
		long long cur = chuyenCoSo10(k,a) + chuyenCoSo10(k,b);
		cout << chuyenCoSoK(k,cur) << 	endl;

	}

}

