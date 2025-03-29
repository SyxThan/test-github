#include<bits/stdc++.h>

using namespace std;

int x[11];
int n, m;
bool a[11], dn[100], dx[100];
int cnt;
void ktao(){
    for(int i = 1;i <= n;i++) a[i] = true;
    for(int i = 1;i < n * 2;i++) dn[i] = true;
    for(int i = 1;i < n * 2;i++) dx[i] = true;

}
void Try(int i){
    for(int j = 1;j <= n;j++){
        if(a[j] && dx[i-j+n] && dn[i+j-1]) { // i - j + n la duong cheo chinh, i + j - 1 la duong cheo phu
            x[i] = j;  // ghi nhan vi tri quan hau
            a[j] = false;  // danh dau cot j da co quan hau
            dx[i-j+n] = false;
            dn[i+j-1] = false;
            if(i == n) cnt++; // neu da dat duoc n quan hau thi tang bien dem
            else {
                Try(i+1);
            }
            a[j] = true;
            dx[i-j+n] = true;
            dn[i+j-1] = true;
        }
    }
}



int main(){
    int t;
    cin >> t;
    while(t--){
       cin >> n;cnt = 0;
       ktao();
       Try(1);
       cout << cnt << endl;
    }
}