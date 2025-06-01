#include<bits/stdc++.h>

using namespace std;

vector<int> adj[100000];  // tao mang vector a co 1001 phan tu de luu danh sach ke
int a[1001][1001];
int main(){
        int n;
        cin >> n;
        cin.ignore();
        for(int i = 1;i <= n;i++) {
            string s;
            getline(cin,s);
            stringstream ss(s);
            string w;
            while(ss >> w){
                int x = stoi(w);
                a[i][x] = 1;
                a[x][i] = 1;
            }
        }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    

}