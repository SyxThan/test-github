#include<bits/stdc++.h>

using namespace std;
int n;
int a[1001];

void in(){
    for(int i = 0;i < n;i++){
        cout << a[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j = 0;j <= 1;j++){
        a[i] = j;
        if(i == n - 1) in();
        else Try(i+1);
    }
}


int main(){
    cin >> n;
    Try(0);
}