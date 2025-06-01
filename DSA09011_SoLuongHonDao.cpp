#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

int n,m;
int a[1001][1001];

void inp(){
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> a[i][j];
		}
	}
}

void bfs(int i,int j){
	queue<pair<int,int>> q;
	q.push({i,j});
	while(!q.empty()){
		pair<int,int> top = q.front();
		q.pop();
		int x = top.first;
		int y = top.second;
		for(int k = 0;k < 8;k++){
			int x1 = x + dx[k];
			int y1 = y + dy[k];
			if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && a[x1][y1]){
				a[x1][y1] = 0;
				q.push({x1,y1});
			}
		}
	}
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		inp();
		int cnt = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				if(a[i][j]){
					cnt++;
					bfs(i,j);
				}
			}
		}
		cout << cnt << endl;

	}

}




