#include<bits/stdc++.h>

using namespace std;

char c;
int k;
string s;
void tryAt(char i){
    for(char j = i;j <= c;j++){
        s.push_back(j);
        if(s.length() == k) cout << s << endl;
        else tryAt(j);
        s.pop_back();
    } 

}

int main(){
    cin >> c >> k;
    tryAt('A');
    cout << endl;
}