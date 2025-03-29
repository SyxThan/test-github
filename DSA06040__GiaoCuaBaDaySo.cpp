#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int a[n1], b[n2], c[n3];
        for(int i = 0; i < n1; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n2; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n3; i++){
            cin >> c[i];
        }
        int ok = 0;
        int i = 0, j = 0, k = 0;   
        while(i < n1 && j < n2 && k < n3){ // tao 3 bien i, j, k de chay qua 3 mang
            if(a[i] == b[j] && b[j] == c[k]){   // neu 3 phan tu bang nhau thi in ra va tang 3 bien
                cout << a[i] << " ";
                i++;
                j++;
                k++;
                ok = 1;
            }
            int m = min(a[i], min(b[j], c[k]));  // tim phan tu nho nhat trong 3 phan tu
            if(a[i] == m){ // phan tu nao bang phan tu nho nhat thi tang bien do
                i++;
            }
            if(b[j] ==  m){
                j++;
            }
            if(c[k] ==  m){
                k++;
            }

        }
        if(ok == 0){
            cout << -1;
        }
        cout << endl;
    }

}