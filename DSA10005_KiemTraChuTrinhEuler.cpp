#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,m;
vector<int> adj[1001];
int in[1001];
int out[1001];
bool ok;
void inp(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		in[y]++;
		out[x]++;
	}
}

void ktraChuTrinh(){
	for(int i = 1;i <= n;i++){
		if(in[i] != out[i]){
			ok = false;
			break;
		}
	}
	if(ok) cout << 1 << endl;
	else cout << 0 << endl;
}

void ktraDuongDi(){
	int st,en;
	for(int i = 1;i <= n;i++){
		if(in[i] == out[i]) continue;
		else if(in[i] == out[i] + 1) st++;
		else if(out[i] == in[i] + 1) en++;
		else {
			ok = false;
			break;
		}
	}
	if(ok && st == 1 && en == 1){
		cout << 1 << endl;
	}else cout << 0 << endl;
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		for(int i = 1;i <= n;i++){
			adj[i].clear();
			in[i] = 0;
			out[i] = 0;
		}
		inp();
		ok = true;
		ktraChuTrinh();

	}

}




