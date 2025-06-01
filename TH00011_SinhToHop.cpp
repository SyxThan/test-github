#include<bits/stdc++.h>

using namespace std;

int n,k;
bool ok = true;
int a[1001];

void init(){
    for(int i = 0;i < k;i++){
        cin >> a[i];
    }
}
void result(){
    for(int i = 0;i < k;i++){
    	cout << a[i] << " ";
    }
    cout << endl;
    
}
void next_Combination(){
    int i = k - 1;
    while(i >= 0 && a[i] == n - k + i + 1){
        i--;
    }
    if(i == -1) ok = false;
    else  {
    	a[i]++;
    	for(int j = i + 1;j < k;j++){
    		a[j] = a[j - 1] + 1;
		}
	}
}



int main(){
    cin >> n >> k;
    init();
    next_Combination();
    set<int> se;
    for(int i = 0;i < k;i++){
    	se.insert(a[i]);
	}
	int x1 = se.size();
	next_Combination();
	for(int i = 0;i < k;i++){
    	se.insert(a[i]);
	}
	int x2 = se.size();
	cout << x2 - x1 << endl;
	
	
}
