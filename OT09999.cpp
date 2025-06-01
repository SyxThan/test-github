#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,m;
int a[1001][1001];   // Ma tran ke
vector<int> adj[1001]; // Danh sach ke
vector<pair<int,int>> edge; // Danh sach canh


int main(){
	
	int ot;
	cin >> ot;
	// Danh sach canh -> Danh sach ke
	if(ot == 1){ 
		cin >> n >> m;
		for(int i = 0;i < m; i++){
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
			// Neu co huong thi chi duoc phep su dung adj[x].push_back(y);
		}
		for(int i = 1;i <= n; i++){
			cout << i << ": ";
            for(int j = 0;j < adj[i].size();j++){  
                cout << adj[i][j] << " ";       
            }
            cout << endl;
		}
		for(int i = 0;i < 10000;i++){ 
            adj[i].clear();
        }
	}
	// Danh sach canh -> Ma tran ke
	else if(ot == 2){
		cin >> n >> m;
		for(int i = 0;i < m;i++){
			int x, y;
			cin >> x >> y;
			a[x][y] = a[y][x] = 1;
			// Neu co huong thi chi duoc phep su dung a[x][y] = 1;
			
		}	
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				cout << a[i][j] << " ";
			}	
			cout << endl;
		}
	}
	// Ma tran ke -> Danh sach canh
	else if(ot == 3){
		cin >> n;
		for(int i = 1;i <= n; i++){
			for(int j = 1;j <= n;j++){
				cin >> a[i][j];
			}
		}
		for(int i = 1;i <= n; i++){
			for(int j = 1;j <= n;j++){
				if(a[i][j] && i < j){
					edge.push_back({i,j});
				}
			}
		}
		for(auto it : edge){
			cout << it.first << " " << it.second << endl;
		}
	}	
	// Ma tran ke -> Danh sach ke
	else if(ot == 4){
		cin >> n;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				cin >> a[i][j];
				if(a[i][j]){
					//Chi can cho i vao j vi vong for se duyet het cac phan tu
					adj[i].push_back(j);
				}
			}
		}
		for(int i = 1;i <= n;i++){
			cout << i << ":";
			for(int j = 0;j < adj[i].size();j++){
				cout << " " << adj[i][j];
			}
			cout << endl;
		}	
	}
	// Danh sach ke -> Ma tran ke
	else if(ot == 5){
		cin >> n;
		cin.ignore();
		for(int i = 1; i <= n;i++){
			string s;
			getline(cin,s);
			stringstream ss(s);
			string w;
			while(ss >> w)	{
				int x = stoi(w);
            	a[i][x] = 1;
            	a[x][i] = 1;
			}	
		}
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	// Danh sach ke -> Danh sach canh
	else if(ot == 6){
		cin >> n;
		cin.ignore();
		for(int i = 1; i <= n;i++){
			string s;
			getline(cin,s);
			stringstream ss(s);
			string w;
			while(ss >> w)	{
				int x = stoi(w);
            	if(i < x){
            		edge.push_back({i,x});
				}
				// Neu la co huong khong can kiem tra dieu kien if va phai them sort
			}	
		}
		for(auto it : edge){
			cout << it.first << " " << it.second << endl;
		}
		
	}
}


