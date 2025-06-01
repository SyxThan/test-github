#include<bits/stdc++.h>

using namespace std;

void tower(int n, char a, char b, char c){
    if(n == 1){
        cout << a << " -> " << c << endl;
        return;
    }
    tower(n-1,a,c,b); // chuyen n - 1 thap sang cot b
    tower(1,a,b,c); // chuyen thap cao nhat sang cot c
    tower(n-1,b,a,c); // chuyen la n - 1 thap tu cot b sang cot c
}



int main(){
    int n;
    cin >> n;
    tower(n,'A','B','C');
}