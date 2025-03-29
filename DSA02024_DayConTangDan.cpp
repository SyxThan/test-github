#include<bits/stdc++.h>

using namespace std;


int a[21];
int x[11];
vector<string> v;

int n;
void add(int i){
    string res = "";
    for(int j  = 1;j <= i - 1;j++){
        res += to_string(x[j]);
        res += " ";
    }
    res += to_string(x[i]);
    v.push_back(res);
}

void Try(int i,int cur){
    for(int j = cur + 1;j <= n;j++){
        if(a[j] <= x[i-1]) continue; // sai <=
        x[i] = a[j];
        if(i != 1) add(i);
        if(i != n) Try(i+1,j);
        
    }
}

int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    Try(1,0);
    sort(v.begin(), v.end());
    for(int i = 0;i <  v.size();i++){
        cout << v[i] << endl;
    }
}