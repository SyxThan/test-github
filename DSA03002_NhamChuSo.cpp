#include<bits/stdc++.h>

using namespace std;

int doimin(string &s){
    for(int i = 0;i < s.length();i++){
        if(s[i] == '6') s[i] = '5';
    }
    return stoi(s);
}


int doimax(string &s){
    for(int i = 0;i < s.length();i++){
        if(s[i] == '5') s[i] = '6';
    }
    return stoi(s);
}



int main(){
        string s1, s2;
        cin >> s1 >> s2;
        int ma = doimax(s1) + doimax(s2);
        int mi = doimin(s1) + doimin(s2);
        cout << mi << " " << ma << endl;
    
}