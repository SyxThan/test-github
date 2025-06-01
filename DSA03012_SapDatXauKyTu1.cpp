#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


/* So sanh tan suat cua tu xuat hien nhieu nhat voi 
tong cac tu con lai
sum + 1 >= f[max] --> True
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int f[26];
		memset(f,0,sizeof(f));
		for(int i = 0;i < s.length();i++){
			f[s[i] - 'a']++;
		}
		int sum = 0;
		sort(f, f+26 ,greater<int> ()) ;
		for(int i = 1;i < 26;i++){
			sum += f[i];
		}
		
		if(sum + 1 >= f[0]){
			cout << 1 << endl;
		}else{
			cout << -1 << endl;
		}

	}

}

