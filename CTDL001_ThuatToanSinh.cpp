#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok = 0;

void in(){
    for(int i = 0;i <  n; i++){
        cout << a[i] << " ";
    }
}

void sinh(){
    int i = n - 1;
    while(i >= 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i < 0){
       ok = 1;
    }
    else{
        a[i] = 1;;
    }
}

int check(){
    int l = 0, r = n - 1;
    while(l < r){
        if(a[l] != a[r]){
            return 0;
        }
        l++;
        r--;
    }
   return 1; 
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
    while(ok == 0){
        if(check()){
            in();
            cout << endl;
        }
        sinh();
    }
}