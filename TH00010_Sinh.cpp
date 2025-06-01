#include<bits/stdc++.h>

using namespace std;

int n,k;
bool ok = true;
int a[1001];
int b[1001];

void init(){
    for(int i = 0;i < n;i++){
        a[i] = 0;
    }
    for(int i = 0;i < n;i++){
    	cin >> b[i];
	}
}
void result(){
    for(int i = 0;i < n;i++){
        if(a[i]) cout << b[i] << " ";
    }
    cout << endl;
    
}
void next_Bit_string(){
    int i = n - 1;
    while(i >= 0 && a[i] == 1 ){
        a[i] = 0;
        i--;
    }
    if(i == -1) ok = false;
    else  a[i] = 1;
}
int check(){
	int sum = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == 1){
			sum += b[i];
		}
	}
	if (sum == k) return 1;
	else return 0;
}


int main(){
    cin >> n >> k;
    init();
    int cnt = 0;
    while(ok){
		if(check()){
			result();
			cnt++;
		}
        next_Bit_string();
    }
    cout << cnt;
}
