#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok = 0, s;
int b[100];

void in(){
    for(int i = 0;i < n;i++){
        if(a[i] == 1){
            cout << b[i] << " ";
        }   
    }
}

void sinh(){
    int i = n- 1;
    int sum = 0;
    while(i >= 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i < 0) {
        ok = 1;
    }
    else{
        a[i] = 1;
    }
}

int check(){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            sum += b[i];
        }
    }
    if(sum == s){
        return 1;
    }
    return 0;
}


int main(){
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
    while(ok == 0){
        if(check()){
            in();
            cnt++;
            cout << endl;
        }
        sinh();
    }
    cout << cnt;
}