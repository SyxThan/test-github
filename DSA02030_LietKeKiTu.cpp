#include<bits/stdc++.h>

using namespace std;


int x[11];
vector<string> v;

int  k;
char c;

string res;

void Try(char st){
    for(char j = st; j < c;j++){
        if(res.size() == k) {
            v.push_back(res);
        }
        else Try(st+1);
    }
}

int main(){
    cin >> c >> k;
    int n = c - 'A';
    Try('A');
    sort(v.begin(), v.end());
    for(int i = 0;i <  v.size();i++){
        cout << v[i] << endl;
    }
}