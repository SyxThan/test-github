#include<bits/stdc++.h>

using namespace std;

bool cot[1000], dcxuoi[1000], dcnguoc[1000];
int a[9][9];
long long sum;
long long res;
void init(){
    res = INT_MIN;
    sum = 0;
    for(int i = 1;i <= 8;i++){
        for(int j = 1;j <= 8;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1;i <= 8;i++){
        cot[i] = true;
    }
    for(int i = 1;i < 2*8;i++){
        dcxuoi[i] =  true;
        dcnguoc[i] = true;
    }
}


void Try(int i){
    for(int j = 1;j <= 8;j++){
        if(cot[j] && dcxuoi[i-j+8] && dcnguoc[i+j-1]){
            sum += a[i][j];
            cot[j] = false;
            dcxuoi[i-j+8] = false;
            dcnguoc[i+j-1] = false;
            if(i == 8){
                res = max(sum,res);
            }
            else {
                Try(i+1);
            }
            sum -= a[i][j];
            cot[j] = true;
            dcxuoi[i-j+8] = true;
            dcnguoc[i+j-1] = true;
        }
    }
}


int main(){
    int T;
    cin >> T;
    for(int i = 1;i <= T;i++){
        init();
        Try(1);
//        cout << res << endl;
        cout << "Test " << i << ": " << res << endl;
    }
}
