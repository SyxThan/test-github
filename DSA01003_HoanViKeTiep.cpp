#include<bits/stdc++.h>

using namespace std;

int a[1000],n , final;

void sinh(){
    int i = n - 1;
    while(i > 0 && a[i] > a[i + 1]){    // Tim vi tri i dau tien ma a[i] < a[i + 1]
        i--;
    }
    if(i == 0) final = 1;   // Neu i = 0 thi day la hoan vi cuoi cung
    else{
        int j = n;
        while(a[j] < a[i]){ // Tim vi tri j dau tien ma a[j] > a[i]
            j--;
        }
        swap(a[i],a[j]);
        int l = i + 1, r = n;  // Dao nguoc tu vi tri i + 1 den n
        while(l <= r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        final = 0;
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        sinh();
        if(final == 1){
            for(int i = 1;i <= n;i++){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            for(int i = 1;i <= n;i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}