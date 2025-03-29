/*
    Quy luật của mã gray thứ n là: 
    1. Sao chép và đảo ngược toàn bộ gray thứ n - 1
    2. Nủa đầu thêm 0 và nửa sau thêm 1

    0 00 
    0 01
    0 11 
    0 10 
    1 10 
    1 11 
    1 01 
    1 00
*/
 
#include<bits/stdc++.h>

using namespace std;

string s[100000];


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l = pow(2,n);
        s[1] = '0'; // Khoi tao ma Gray 1
        s[2] = '1';
        if(n > 1){
            int vt = 2; // vi tri lay doi xung.
            for(int i = 2;i <= n;i++){
                int k = pow(2,i); // vi tri lay doi xung cua ma gray thu i 
                for(int j = 1;j <= vt;j++){
                    s[k-j+1] = '1' + s[j];  // Lay doi xung nua sau cua ma gray
                    s[j] = '0' + s[j]; 
                }
                vt = k;
            }
        
        }
        for(int i = 1;i <= l;i++){
            cout << s[i] << " ";
        }
        cout << endl;
    }

}