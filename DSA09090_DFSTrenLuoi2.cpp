#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;


int n,m,s,t;
bool vs[1001][1001];
char a[1001][1001];
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};


void inp(){
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> a[i][j];
			if(a[i][j] == 'A'){
				s = i, t = j;
			}
		}
	}
}
bool DFS(int i, int j){
	// Kiem tra a[i][j]
	if(a[i][j] == 'B'){
		return true;
	}
	a[i][j] = 'x';
	for(int k = 0;k < 4;k++){
		int i1 = i + dx[k];  
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != 'x' ){
			if(DFS(i1,j1)) return true; 
		}
	}
	return false;
}
int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int te;
	cin >> te;
	while(te--){
		memset(vs,false,sizeof(vs));
		inp();
		int cnt = 0;
		if(DFS(s,t)){
			cout << "YES";
		}
		else cout << "NO";
		cout << endl;
	}

}

// TEST Kiem tra xem co duong di tu A den B khong?
/*
1
6 6
Aooxoo
oxoooo
oxoooo
ooooxx
Boooxo
oooxxx
*/


