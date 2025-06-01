#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[1001];
bool unvs[1001];
void in(){
    for(int i = 1;i <= n;i++){
        cout << a[i];
    }
    cout << endl;
}

void init(){
    for(int i = 1;i <= n;i++) unvs[i] = true;
}

void Try(int i){
    for(int j = 1;j <= n;j++){
        if(unvs[j]){
            a[i] = j;
            unvs[j] = false;
            if(i == n) {
                in();
            }
            else Try(i+1);
            unvs[j] = true;
        }
    
    }
}


int main(){
    cin >> n;
    init();
    Try(1);
}