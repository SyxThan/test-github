#include<bits/stdc++.h>

using namespace std;

vector<int> a[100000];  // tao mang vector a co 1001 phan tu de luu danh sach ke
int n, m;
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0;i < m;i++){ // duyet qua m canh
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);  // them y vao danh sach ke cua x
        }
        for(int i = 1;i <= n;i++){ // duyet qua cac dinh
            cout << i << ": ";
            for(int j = 0;j < a[i].size();j++){  // duyet qua cac dinh ke cua i
                cout << a[i][j] << " ";         // in ra cac dinh ke cua i
            }
            cout << endl;
        }
        for(int i = 0;i < 10000;i++){  // xoa danh sach ke cua cac dinh
            a[i].clear();
        }
        cout << endl;
    }

}