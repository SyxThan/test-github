#include<bits/stdc++.h>

using namespace std;

string s = "";

void backtrack(int i){
    if(s.size() == 10){
        if(s[0] == '0' && s[1] == '0') return;
        if(s[3] == '0' && s[4] == '0') return;
        if(s[6] != '0' && s[3] != '2'){
            cout << s << endl;
        }
        return;
    }
    if(i == 2 || i == 5) {
        s.push_back('/');
        backtrack(i+1);
        s.pop_back();
    }
    else{
        s.push_back('0');
        backtrack(i+1);
        s.pop_back();
        s.push_back('2');
        backtrack(i+1);
        s.pop_back();
    }
}

int main(){
    backtrack(0);
}