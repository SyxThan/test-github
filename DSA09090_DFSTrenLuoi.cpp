#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int n,m;
bool vs[1001][1001];
char a[1001][1001];
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};


void inp(){
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> a[i][j];
		}
	}
}
void DFS(int i, int j){
	vs[i][j] = true;
	// Tham i , j
	for(int k = 0;k < 4;k++){
		int i1 = i + dx[k];  
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'x' && !vs[i1][j1]){
			DFS(i1,j1);
		}
	}
}
int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		memset(vs,false,sizeof(vs));
		inp();
		int cnt = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				if(a[i][j] == 'x' && !vs[i][j]){
					cnt++;
					DFS(i,j);
				} 
			}
		}
		cout << cnt << endl;
	}

}




