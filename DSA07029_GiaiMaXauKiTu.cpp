#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int curNum = 0;
		string curStr = "";
		stack<string> stStr;
		stack<int> stNum;
		for(char c : s){
			if(c >= '0' && c <= '9'){
				curNum = curNum * 10 + (c - '0');
			}
			else if(c == '['){
				stNum.push(curNum);
				stStr.push(curStr);
				curNum = 0;
				curStr = "";
			}
			else if(c == ']'){
				int num = stNum.top();
				stNum.pop();
				string par = "";
				if(!stStr.empty()){
					par = stStr.top();
					stStr.pop();
				}
				string tmp = "";
				for(int i = 0;i < num;i++){
					tmp += curStr;
				}
				curStr = par + tmp;
			}
			else{
				curStr += c;
			}
		}
		cout << curStr << endl;

	}

}


