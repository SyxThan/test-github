#include <bits/stdc++.h>
using namespace std;


int a[11];
int n;

void print(int m){
    cout << "[";
    for(int i = 0;i < m - 1;i++){
        cout << a[i] << " ";
    }
    cout << a[m-1] << "]";
    cout << endl;
}

void TryAt(int n){
    print(n);
    for(int i = 0;i < n - 1; i++) a[i] = a[i] + a[i+1];   // Cong 2 phan tu lien ke
    if((n-1) != 0) TryAt(n-1);  // Dieu kien n - 1 != 0 de tranh lap vo tan
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       cin >> n;
       for(int i = 0;i < n;i++) cin >> a[i];
       TryAt(n);
    }
}
