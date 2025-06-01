#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

void inStack(stack<int> st){
	stack<int> tmp;
	while(!st.empty()){
		tmp.push(st.top());
		st.pop();
	}
	while(!tmp.empty()){
		cout << tmp.top() << " ";
		tmp.pop();
	}
}
int main(){
	stack<int> st;
	vector<string> v;
	int x;
	string s;
	while(cin >> s){
		if(s == "push"){
			cin >> x;
			st.push(x);
		}
		else if(s == "pop"){
			if(!st.empty()){
				st.pop();
			}
		}
		else if(s == "show"){
			if(st.empty()){
				cout << "empty";
			} else{
				inStack(st);
			}
			cout << endl;
		}
	
	}
	

}


