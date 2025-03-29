#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;
vector<int> a(n);
for(int i = 0; i < n; i++) {
    cin >> a[i];
}
sort(a.begin(), a.end());
int maxPerimeter = 0;
for(int i = n - 1; i >= 2; i--) {
    if(a[i] < a[i-1] + a[i-2]) {
        maxPerimeter = a[i] + a[i-1] + a[i-2];
        break;
    }
}
if(maxPerimeter > 0) {
    cout << maxPerimeter << endl;
} else {
    cout << "0" << endl;
}
}